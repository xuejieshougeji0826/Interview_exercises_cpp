#include "iostream"
using namespace std;
int main(){
    int a=8;
    int b=a&(a-1);
    cout<<b<<endl;
    if (b==0)
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
    cout<<b<<endl;
}