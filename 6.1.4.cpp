#include <iostream>
using namespace std;
bool judge(int a[],int n) {
    if (n==1){
        return true;
    }
    else{
        return (a[n-1]>a[n-2])&&judge(a,n-1);
    }
}
int main(){
    int a[]={1,2,3,4,5,6,7,8,1};
    int n= sizeof(a)/ sizeof(a[0]);

    if (judge(a,n)==0)
        cout<<"no"<<endl;
    else
        cout<<"yes"<<endl;
}