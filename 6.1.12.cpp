#include <iostream>
using namespace std;

int cal1(int a[],int n){
    int sum=a[0];
    for (int i=1;i<n;i++){
        sum^=a[i];
    }
    return sum;
}
int main(){
    int array[]={1,2,1,3,1,2,1,3,9};
    int len= sizeof(array)/sizeof(array[0]);
    cout<<cal1(array,len)<<endl;

}
