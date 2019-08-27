#include "iostream"
using namespace std;
int main(){
char a[]="aosfhoa";
char b[20];
strcpy(b,"asfqwaasda");
cout<<b<<endl;
}
char *strcpy(char *strDest,const char * strSrc)
{
    char *p=strDest;
    while((*strDest++=*strSrc++)!='\0');
    return p;
}