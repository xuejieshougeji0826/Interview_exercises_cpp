#include <iostream>
using namespace std;
int main()
{
    int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    cout<<(*(a+1))[1]<<endl;
}

