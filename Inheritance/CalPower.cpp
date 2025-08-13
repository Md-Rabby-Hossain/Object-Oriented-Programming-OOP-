#include<iostream>
using namespace std;

class Resistance
{
private:
    float V,R;
public:
    void init(float V, float R)
    {
        this->V=V;
        this->R=R;
    }
    float getV() {return V; }
    float getR() {return R; }


};

class Resistance1: public Resistance
{
public:

    float CalPower()
    {
        float v = getV();
        float r =getR();
        return (v*v)/r;
    }
};


int main()
{

    Resistance1 r;
    r.init(2.0, 2);
    float x = r.CalPower();
    cout<< "the power is: "<< x<< endl;
}
