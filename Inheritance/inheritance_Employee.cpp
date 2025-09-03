#include<iostream>
#include<string>
using namespace std;


class absemp   //abstruct calss
{
public:
    virtual void askFP() = 0; //pure virtual function
};

class employee: public absemp
{
protected:
    string name, company;
    int age;
public:
//    void setter(string name, string company, int age)
//    {
//        this->name=name;
//        this->company = company;
//        if(age>=18)
//            this->age=age;
//        else
//            cout<< "not old wnough"<<endl;
//    }

    void getter()
    {
        cout<< "name: "<< name<<endl;
        cout<< "company: " <<company<<endl;
        cout<< "age: "<<age<<endl;
    }


    employee(string name, string company, int age)
    {
        this->name=name;
        this->company=company;
        this->age=age;
    }


//    void intro()
//    {
//        cout<< "name: "<< name<<endl;
//        cout<< "company: " <<company<<endl;
//        cout<< "age: "<<age<<endl;
//    }

    void askFP()
    {
        if(age>30)
            cout<<name<< " got promoted."<<endl;
        else
            cout<< name<< " sorry,, no promotion."<<endl;
    }


};



class dev:public employee
{
public:
    string FPL;
    dev(string name, string company, int age, string FPL) : employee(name, company, age)
    {
        this->FPL = FPL;
    }

    void fixBug()
    {
        cout<<name<<" is fixing bug......"<<endl;
    }
};


class teacher:public employee
{
public:

    string sub;
    void pl()
    {
        cout<< name<< " is preaparing "<< sub<< " lessons"<<endl;
    }

    teacher(string name, string company, int age, string sub):employee(name, company, age)
    {
        this->sub=sub;
    }
};


int main()
{

    dev rr("MSA,,", "KKK", 21, "Python");
    teacher t1("fff", "dddd", 32, "EEE");
    t1.pl();
    return 0;
}
