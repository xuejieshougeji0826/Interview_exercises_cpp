#include <iostream>

using  namespace std;

int find(int a[],int l)
{
    for (int i = 0; i < l; i++)
    {
        for (int j = i + 1; j < l; j++)
        {
            if ((a[i] ^ a[j]) == 0)
            {
                //cout << a[i] << a[j] << endl;
                return a[i];
            }
        }
    }
}


int main(){
    int array[]={1,2,3,4,5,6,7,8,1,9};
    int len= sizeof(array)/ sizeof(array[0]);
    //cout<<find(array,len)<<endl;
    cout<<(1^0^2^3^4^1)<<endl;
}

