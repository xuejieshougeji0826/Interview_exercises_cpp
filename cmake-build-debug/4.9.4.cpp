#include <iostream>
using namespace std;
int main(){
    int a=4;
    ++a+=a++;
    cout<<a<<endl;

    a=4;
    a+=a++;
    cout<<a<<endl;

    a=4;
    ++a+=++a;
    cout<<a<<endl;
    return 0;
}