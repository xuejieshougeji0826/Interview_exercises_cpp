//
// Created by gzc on 2019-08-18.
//
#include "iostream"
#include "vector"
using namespace std;
void Sort(int array[],int low,int high){
    int i,j,index;
    if (low>=high){
        return;
    }
    i=low;
    j=high;
    index=array[i];
    while(i<j){
        while(i<j&&array[j]<=index){
            j--;
        }
        if (i<j)
            array[i++]=array[j];
        while(i<j&&array[i]>index)
            i++;
        if (i<j)
            array[j--]=array[i];
    }
    array[i]=index;
    Sort(array,low,i-1);
    Sort(array,i+1,high);
}

void Quicksort(int array[],int l){
    Sort(array,0,l-1);
}



int main(){
    int i=0;
    int a[]={2,0,3,4,1,5,8,7,6,9};
    int len= sizeof(a)/ sizeof(a[0]);

//    cout<<len<<endl;
    Quicksort(a,len);
    for (i=0;i<len;i++){
        cout<<a[i];

    }
    return 0;
}