#include<iostream>
using namespace std;

class animal
{
public:
    virtual void sound()
    {
        cout<< "Animal Sound....."<<endl;
    }
};

class dog: public animal
{
public:
    void sound() override
    {
        cout<< "woof"<<endl;
    }
};

class cat : public animal
{
    void sound() override
    {
        cout<< "meow..."<<endl;
    }
};


int main()
{
    animal *a;
    dog d;
    cat c;

    a= &d;
    a->sound();

    a=&c;
    a->sound();

    return 0;
}
