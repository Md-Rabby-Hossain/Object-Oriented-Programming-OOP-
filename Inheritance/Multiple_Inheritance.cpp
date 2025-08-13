#include<iostream>
using namespace std;

class sports
{
protected:
    int ss;

public:
    void setss(int score)
    {
        ss = score;
    }
};

class academics
{
protected:
    int as;
public:
    void setas(int score)
    {
        as=score;
    }
};


class result: public sports, public academics
{
public:
    void displayResult()
    {
        int total = as + ss;
        cout<< "Sports score: "<< ss<<endl;
        cout<< "Academic Score: "<<as<<endl;
        cout<< "Total Score is: "<<total<< endl;
    }
};


int main()
{
    result r;
    r.setss(45);
    r.setas(44);
    r.displayResult();
    return 0;
}
