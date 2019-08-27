#include "iostream"
#include "vector"
#include "map"
using namespace std;
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;

int maxenergy(int reactorCap, int n, int maxmass, vector<int> vol, vector<int> mass, vector<int> ener)
{
    if (n < 1)
        return 0;
    vector<vector<int>> dp(maxmass + 1, (vector<int>)(reactorCap + 1));
    for (int i = 0; i < n; i++)
    {
        for (int j = dp.size()-1; j > 0; j--)
        {
            for (int k = dp[j].size()-1; k > 0; k--)
            {
                if(vol[i] <= k && mass[i] <=j)
                    dp[j][k] = max(dp[j][k], dp[j - mass[i]][k-vol[i]] + ener[i]);
            }
        }
    }
    return dp[maxmass][reactorCap];
}

int main()
{
    int reactorCap;
    cout << "Intput reactorCap: ";
    cin >> reactorCap;
    int n;
    cout << "Intput numberOfRadLiquid:";
    cin >> n;
    int maxmass;
    cout << "Intput maxmass: ";
    cin >> maxmass;
    vector<int>volumes;
    vector<int>masses;
    vector<int>energies;
    int tmp = 0;
    for (int i = 0; i<n; i++)
    {
        cout << "Intput volumes:";
        cin >> tmp;
        volumes.push_back(tmp);
    }
    for (int i = 0; i<n; i++)
    {
        cout << "Intput masses:";
        cin >> tmp;
        masses.push_back(tmp);
    }
    for (int i = 0; i<n; i++)
    {
        cout << "Intput energies:";
        cin >> tmp;
        energies.push_back(tmp);
    }
    int res = maxenergy(reactorCap, n, maxmass, volumes, masses, energies);
    cout << res << endl;
    system("pause");
    return 0;
}

