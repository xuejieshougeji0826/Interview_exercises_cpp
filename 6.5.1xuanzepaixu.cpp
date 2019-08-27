#include <iostream>
#include <vector>
using namespace std;

void xuanze1(int v[],int len){
    for (int i=0;i<len;i++){
        int temp=v[i];
        int flag=i;
        for (int j=i+1;j<len;j++){
            if (temp<v[j]){
                temp=v[j];
                flag=j;
            }

            }
        if (flag!=i){
                v[flag]=v[i];
                v[i]=temp;
        }
    }
}
void xuanze(vector <int> v,int len){
    for (int i=0;i<len;i++){
        int temp=v[i];
        int flag=i;
        for (int j=i+1;j<len;j++){
            if (temp<v[j]){
                temp=v[j];
                flag=j;
            }

        }
        if (flag!=i){
            v[flag]=v[i];
            v[i]=temp;
        }
    }
}
int main(){
    int i;
    vector <int> a;
    do{
        cin>>i;
        a.push_back(i);
    }while(getchar()!='\n');

    int l=a.size();
    xuanze(a,l);
    //    int b[]={38,65,97,7,13,27,49};
//    int l2=sizeof(b)/sizeof(b[0]);
//    xuanze1(b,l2);
    for (int k=0;k<l;k++){
        cout<<a[k]<<' ';
    }
}

