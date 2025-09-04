#include<iostream>
using namespace std;

class base
{
public:
    virtual void print()
    {
        cout<< "Print F of Base class...."<<endl;
    }
    void show()
    {
        cout<< "Show F of Base class...."<<endl;
    }
};


class derived: public base
{
public:
    void print()
    {
        cout<< "Print F of derived class..."<<endl;
    }

    void show()
    {
        cout<< "Show F of Derived class..."<<endl;
    }
};


int main()
{
    base* b;
    derived d;
    b = &d;

    b->print();
    b->show();
//    b.print();
//    b.show();
//
//    derived d;
//    d.print();
//    d.show();
}
