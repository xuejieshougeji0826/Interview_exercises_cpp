//
// Created by gzc on 2019-08-08.
//

#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace::std;

class C
{
public:
    C() {cout<<"C";}
    ~C(){cout<<"~C";}
};

class A
{
public:
    A() {cout<<"A";}
    ~A(){cout<<"~A";}
};


class B : public A
{
public:
    //B(A &a, C &c):_a(a), _c(c) {cout<<"B";}
    B() {cout<<"B";}
    ~B(){cout<<"~B";}
private:
    C _c;
    A _a;
};

int main(int argc, char**argv) {
    //C *d=new C();
    //A *e=new A();
    C c;
    A a;
    //B b(a, c);
    //B b(*d, *e);
    B b;

    return 0;
}