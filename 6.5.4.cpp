#include "iostream"
#include "vector"
using namespace std;
void  Merge(int array[],int p,int q,int r){  //p=0,q=4,r=9;
    int i,j,k,n1,n2;
    n1=q-p+1;   //  n1=5;
    n2=r-q;     //  n2=5;
    int *L=new int [n1];
    int *R=new int [n2];
    for (i =0, k=p;i<n1;i++,k++){
        L[i]=array[k];

    }
//    for (int z=0;z<n1;z++){
//        cout<<L[z];
//
//    }
//    cout<<endl;
    for (i =0, k=q+1;i<n2;i++,k++){
        R[i]=array[k];
    }
//    for (int z=0;z<n2;z++){
//        cout<<L[z];
//    }
//    cout<<endl;
    for (k=p,i=0,j=0;i<n1&&j<n2;k++){
        if (L[i]>R[j]){
            array[k]=L[i];
            i++;
        }
        else{
            array[k]=R[j];
            j++;
        }
    }

    if (i<n1){
        for (j=i;j<n1;j++,k++){
            array[k]=L[j];
        }
    }
    if (j<n2){
        for (i=j;i<n2;i++,k++){
            array[k]=R[j];
        }
    }
}
void Mergesort(int array[],int p,int r) {
    if (p < r){
        int q=(p+r)/2;
        Mergesort(array,p,q);
        Mergesort(array,q+1,r);
        Merge(array,p,q,r);
    }
}


int main(){
    int i=0;
    int a[]={2,0,3,4,1,5,8,7,6,9};
    int len= sizeof(a)/ sizeof(a[0]);
//    cout<<len<<endl;
    Mergesort(a,0,len-1);
    for (i=0;i<len;i++){
        cout<<a[i];

    }
    return 0;
}