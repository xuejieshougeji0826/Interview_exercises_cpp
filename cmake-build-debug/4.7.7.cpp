#include <iostream>
using namespace std;

int ca(int x)
{
    int count=0;
    while(x+1)
    {
        count++;
        x=x|(x+1);
    }
    return count;
}
int main() {
    int a=2014;
    cout<<ca(a)<<endl;
    return 0;
}
