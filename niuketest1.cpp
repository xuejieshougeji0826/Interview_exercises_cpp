//
// Created by gzc on 2019-08-18.
//

#include "iostream"
using namespace std;
int max(int a[]){
    int one=a[0]+a[1]*a[2];
    int two=a[0]*(a[1]+a[2]);
    int three=a[0]*a[1]*a[2];
    int four=(a[0]+a[1])*a[2];
//    cout<<one<<endl;
//    cout<<two<<endl;
//    cout<<three<<endl;
//    cout<<four<<endl;


    return max(max(max(one,two),three),four);
}
int main(){
    int a[3];
    int i =0;
    int b;
    while(i<3){
        cin>>b;
        cout<<b;
        a[i]=b;
        i++;
    }

//    cout<<"ready"<<endl;
    cout<<max(a)<<endl;
    return 0;



//    for (int j=0;j<3;j++){
//        cout<<a[j]<<endl;
//    }
}
