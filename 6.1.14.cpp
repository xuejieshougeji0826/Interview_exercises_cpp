#include <iostream>
#include <vector>
using namespace std;

int Find_lost(int *a,int n)
{
    int sum=0,sum1=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        sum1+=i;
    }
    int result=sum1+n-sum;
    return result;
}

int main() {
    int a[] = {3,2,1,6,4};
    int length_a = sizeof(a) / sizeof(a[0]);
    int Num = Find_lost(a, length_a-1);
    cout << "缺失的数字为：" << Num << endl;
    system("pause");
    return 0;
}