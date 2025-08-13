#include<iostream>
using namespace std;

class overloading
{
    int real, img;
public:
    void input(int real, int img)
    {
        this->real=real;
        this->img=img;
    }
    overloading operator+(int obj)
    {
        overloading t;
        t.real = real + obj;
        t.img = img;
        return t;
    }

    void output()
    {
        cout<< real << "+ i"<<img<<endl;
    }

};



int main()
{
    overloading a,b;
    a.input(4,3);
    b.input(7,8);
    overloading c;
    c = a+5;
    c.output();
    return 0;
}
