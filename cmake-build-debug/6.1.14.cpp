#include <iostream>
#include <vector>
using namespace std;

int findlost(vector<int> &v,long l){
    int sum=0;
    for(int i=0;i<l;i++){
        sum+=v[i];
    }
    return sum;
}
int main()
{
    vector <int> a;
    int i;
    do{
        cin>>i;
        a.push_back(i);
    }while (getchar()!='\n');
    long len=a.size();
    int sum_t=(a[0]+a[len-1])*(len+1)/2;
//    cout<<findlost(a,len)<<sum_t<<endl;
//    cout<<len;
//    for (int i=0;i<a.size();i++)
//        cout<<a.at(i)<<endl;
//    return 0;
    cout<<sum_t-findlost(a,len)<<endl;
}
