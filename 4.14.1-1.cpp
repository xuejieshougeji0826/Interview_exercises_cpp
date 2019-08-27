//#include <iostream>
//
//using namespace std;
//
//class A {
//public:
//    A() {
//        cout << "A()" << endl;
//    }
//    virtual void vt() {
//        cout << "vt A" << endl;
//    }
//    virtual ~A() {
//        cout << "~A()" << endl;
//    }
//};
//
//class B: public A {
//public:
//    B(): A() {
//        cout << "B()" << endl;
//    }
//    virtual void vt() {
//        cout << "vt B" << endl;
//    }
//    virtual ~B() {
//        cout << "~B()" << endl;
//    }
//};
//
//int main() {
//    B b;
//    A *a;
//    a = &b;
//    a->vt();
//    A *pa;
//    B *pb = new B();
//    pb->vt();
//    pa = dynamic_cast<A *> (pb);
//    pa->vt();
//    delete pa;
////    //delete pb;
////}
//
//#include <iostream>
//using namespace std;
//class base {
//public:
//    virtual void bar() {
//        cout << "base bar" << endl;
//    }
//    void foo() {
//        cout << "base foo" << endl;
//        bar();
//    }
//};
//class drive: public base {
//public:
//    void bar() {
//        cout << "drive bar" << endl;
//    }
//    void foo() {
//        cout << "drive foo" << endl;
//    }
//};
//int main() {
//    base *b = new drive();
//    b->foo();
//}
#include<iostream>
using namespace std;
class Father                    //基类 Father
{
public:
    void virtual display()  //定义了虚函数
    {cout<<"Father::display()\n";}
};

class Son:public Father //子类Son
{
public:
    void display()          //覆盖基类中的display函数
    {cout<<"Son::display()\n";}
};

int main()
{
    Father *fp;     //定义基类指针
    Son son;        //子类对象
    fp=&son;        //使基类指针指向子类对象
    fp->display();  //通过基类指针想调用子类中覆盖的display函数
}