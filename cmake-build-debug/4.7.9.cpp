
#include <iostream>
using namespace std;
int div1(const int x, const int y)
{
    int left_num=x;
    int result=0;
    while (left_num>=y)
    {
        int multi=1;
        while(y*multi<=(left_num>>1)) {
            multi = multi << 1;
        }
        result+=multi;
        left_num-=y*multi;
    }

    return result;
}
int main(){
    int a=10,b=3;
    cout<<div1(a,b)<<endl;
}
