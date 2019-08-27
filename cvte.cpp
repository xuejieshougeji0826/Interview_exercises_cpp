#include<iostream>
#include<thread>

using namespace std;
int flag = 0, n;
class Test
{
private:
    static char cnt;
    char a;
public:
    void operator()()
    {
        a = cnt ++;
        while(flag < 3*n)
        {
            if(flag % n == a - 'A')
            {
                cout << a;
                flag ++;
            }
        }
    }
};
char Test::cnt = 'A';

int main()
{
    cin >> n;
    thread wait1([] {
        while (flag < n*3);
    });
    for(int i = 0; i < n; ++ i)
    {
        thread th{Test()};
        th.detach();
    }
    wait1.join();
    return 0;
}
