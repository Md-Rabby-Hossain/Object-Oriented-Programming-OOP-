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
    overloading operator+(overloading obj)
    {
        overloading t;
        t.real = real + obj.real;
        t.img = img+ obj.img;
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
    c = a+b;
    c.output();
    return 0;
}
