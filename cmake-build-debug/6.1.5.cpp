#include <iostream>
using namespace std;

int erfen(int a[],int start,int end,int find){
    int middle=(start+end)/2;
    int position=0;

    if (a[middle]==find){
        position=middle;
        return position;
    }

    else if (a[middle]>find){
        return erfen(a,0,middle,find);
    }
    else if (a[middle]<find){
        return erfen(a,middle,end,find);
    }
    else return 0;
}
int chunbanfa(int a[],int n,int find){
    for (int i=0;i<n;i++)
    {
        if (a[i]==find){
            return i;
        }


    }
}
int main(){
    int array[]={1,2,3,4,5,6,8,9,10,11,12,13,14,15,16};
    int len=sizeof(array)/ sizeof(array[0]);
    int find=8;
    int qidian =0;
    cout<<erfen(array,qidian,len,find)<<endl;
    cout<<chunbanfa(array,len,find)<<endl;

}
