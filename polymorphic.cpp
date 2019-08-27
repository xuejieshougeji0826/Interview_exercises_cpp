//#include <iostream>
//
//class Data {
//public:
//
//    void print(int value)
//    {
//        std::cout << "int value:" << value << std::endl;
//    }
//
//    void print(double value)
//    {
//        std::cout << "double value:" << value << std::endl;
//    }
//
//    void print(char c[])
//    {
//        std::cout << "char value:" << c << std::endl;
//    }
//};
//
//
//int main()
//{
//
//    Data d_;
//
//    int a = 10;
//    double b = 30.654;
//    char c[6] = "hello";
//
//    d_.print(a);//int
//    d_.print(b);//double
//    d_.print(c);//char
//
//    system("pause");
//    return 0;
//}

#include <stdio.h>

union U{
    int a;
    char c;
}u;

int main()
{
    u.a=0x1234;
    if(0x34 == u.c)
    {
        printf("The machine is little-end.\n");
    }
    else if(0x12 == u.c)
    {
        printf("The machine is big-end.\n");
    }
    return 0;
}
