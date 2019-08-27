#include "iostream"
#include "vector"
#include "string"
using namespace std;
int main(){
//    char string[1024]="a bs c.";
    char string1[1024];

    cin.getline(string1,1024);
    cout<<string1<<endl;
    int count=0;
    for (int i=0;(string1[i])!='\0';i++){
        if (string1[i]==' ')
            count++;

    }
    cout<<count+1<<endl;
}