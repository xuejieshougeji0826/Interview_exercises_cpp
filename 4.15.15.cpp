//计算字符串长度的方法
#include <iostream>
using namespace std;
int cal_lengh1(int arr[]){             // 计算数组长度，请记住数组放入函数 sizeof函数变为返回指针长度。
    int q=sizeof(arr);
    int w=sizeof(arr[0]);
    int k=q/w;
    cout<<q<<endl<<w<<endl<<k;
    return k;
}

int cal_lengh2(const char *str){        //传统遍历计算
    int len=0;
    if (str==NULL){
        return 0;
    }
    for (;(*str++)!='\0';){

        len+=1;
    }
    return len;
}

int cal_lengh3(const char *a) {                 //递归方法
    if (*a!='\0')
        return 1+cal_lengh3(++a);
    else return 0;
}
int cal_lengh4(const char *a){

    if (a==NULL){
        return 0;
    }
    else{
        int len=0;
        for (;*a++!='\0';){
            len++;
        }
        return len;
    }
}
int main(){
    int a[]={1,2,3,4,5,6,7,8,9};
    const char *k="asooqpqpn";
    //cal_lengh1(a);
    //cout<<cal_lengh1(a)<<endl;
    //cout<<cal_lengh2(k)<<endl;
    cout<<cal_lengh4(k)<<endl;

}

