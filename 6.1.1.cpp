#include <iostream>
using namespace std;

int sum(int q[],int l){
    int sum=0;
    if (l==0){
        return 0;
    }
    for(int i=0; i<l;i++){
        sum+=q[i];
    }
    return sum;
}

int sum_digui(const int *a,int l){

}


int main(){
    int a[]={1,2,3,4,5,6,7,8,9};
    int len= sizeof(a)/ sizeof(a[0]);
    cout<<sum(a,len)<<endl;
    cout<<sum_digui(a,len)<<endl;
    cout<<len<<endl;
    cout<<*a;
}

