#include <iostream>
using namespace std;

int diguiqiuhe(int *a,int n){
    return n==0?0:diguiqiuhe(a,n-1)+a[n-1];
}

int main(){
    int a[]={1,2,3,4,5,6,7,8,9};
    int len=sizeof(a)/sizeof(a[0]);
    cout<<diguiqiuhe(a,len)<<endl;


}

