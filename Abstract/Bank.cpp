#include<iostream>
using namespace std;


class Bank
{
public:
    virtual void lir() = 0;    //lir means laod interest rate.........

};


class DBBL :public Bank
{
public:
    void lir() override
    {
        cout<< "DBBL loan interest is 8%"<< endl;
    }

};

class CB: public Bank
{
    public:
    void lir() override
    {
        cout<< " CB loan rate is 6%.."<<endl;
    }
};



int main()
{
    CB cb1;
    cb1.lir();


    DBBL e2;
    e2.lir();
//    Bank *b;
//
//    b = new CB();
//    b->lir();
//
//    b = new DBBL();
//    b->lir();
//
//    delete b;
}
