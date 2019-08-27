#include <iostream>
#include <vector>
using namespace std;
void Swap(int &o,int  &p){
    int k=o;
    o=p;
    p=k;
}
void change(vector <int > s ,int len){
    int head=0,end=len-1;
    while (head<end){
        while (s[head]%2!=0){
            head++;

        }
        while (s[end]%2==0){
            end--;

        }
        Swap(s[head],s[end]);

    }
    for (int j=0;j<len;j++){
        cout<<s[j]<<' ';
    }
}

int main(){
    vector <int> a;
    int i;
    do{
        cin>>i;
        a.push_back(i);
    }while (getchar()!='\n');
    int l=a.size();
    change(a,l);
}

