#include "iostream"
using namespace std;


class TakeBus
{
public:
    void TakeBusToSubway()
    {
        cout << "go to Subway--->please take bus of 318" << endl;
    }
    void TakeBusToStation()
    {
        cout << "go to Station--->pelase Take Bus of 306 or 915" << endl;
    }
};
//知道了去哪要做什么车可不行，我们还得知道有没有这个车
class Bus
{
public:
    virtual void TakeBusToSomewhere(TakeBus& tb) = 0;  //？？？为什么要等于0
};

class Subway:public Bus
{
public:
    virtual void TakeBusToSomewhere(TakeBus& tb)
    {
        tb.TakeBusToSubway();
    }
};
class Station :public Bus
{
public:
    virtual void TakeBusToSomewhere(TakeBus& tb)
    {
        tb.TakeBusToStation();
    }
};

int main()
{
    TakeBus tb;
    Bus* b = NULL;
    //假设有十辆公交车，如果是奇数就是去地铁口的，反之就是去火车站的
    for (int i = 1; i <= 10; ++i)
    {
        if ((rand() % i) & 1)
            b = new Subway;
            b->TakeBusToSomewhere(tb);

    }
    b->TakeBusToSomewhere(tb);
    delete b;
    return 0;
}

//

