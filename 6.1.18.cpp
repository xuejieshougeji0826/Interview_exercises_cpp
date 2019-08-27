#include "iostream"
using namespace std;
class qudge{
public:
    int judge(const int a[],int l){
        int max=a[0];
        int max_sec=a[0];
        for (int i=1;i<l;i++){
            if (a[i]>max_sec){
                max_sec=a[i];
                if (max_sec>max){
                    swap(max,max_sec);
                }
//cout<<max<<"\0"<<max_sec<<endl;
            }

        }
        return max_sec;
    }
};

int main(){
    int a[]={2,5,6,7,7,8,98,3,458,5,6};
    int l= sizeof(a)/ sizeof(a[0]);
    qudge u;
    cout<<u.judge(a,l)<<endl;
}