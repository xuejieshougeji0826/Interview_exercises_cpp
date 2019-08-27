#include "iostream"
#include "map"
#include "vector"
using namespace std;
int judge(const int p[],int l){
    map<int ,int > m;
    if (l==0){
        return false;
    }
    else if (l==1){
        return p[0];

    }
    else{

        int j=0;
        m[j]=p[0];
        cout<<m[j]<<endl;
        for (int i=1;i<l;i++){
            if (1==m.count(m[i])){
                m[j]+=1;
                cout<<m[j];
                j+=1;
            }
            else {
                m[j+1]=1;
            }
        }

    }
    cout<<m.size()<<endl;
    for (int j=1;j<m.size();j++){
        cout<<m[j]<<endl;
    }
    int max=m[0];
//    for (int j=1;j<=m.size();j++){
//        if (m[j]>max){
//            max=m[j];
//        }




    return max;
}

int main(){
    int a[]={1,1,2,2,4,4,4,4,5,5,6,6,6};
    int len= sizeof(a)/ sizeof(a[0]);
    cout<<judge(a,len)<<endl;
}
