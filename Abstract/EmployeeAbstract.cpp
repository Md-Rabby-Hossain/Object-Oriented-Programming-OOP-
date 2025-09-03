
#include<iostream>
#include<string>
using namespace std;


class absemp                                                 //abstruct calss
{
    virtual void askFP() = 0;                               //pure virtual function
};

class employee:absemp
{
private:
    string name, company;
    int age;
public:
    void setter(string name, string company, int age)
    {
        this->name=name;
        this->company = company;
        if(age>=18)
            this->age=age;
        else
        cout<< "not old wnough"<<endl;
    }

    void getter()
    {
        cout<< "name: "<< name<<endl;
        cout<< "company: " <<company<<endl;
        cout<< "age: "<<age<<endl;
    }


//    employee(string name, string company, int age)
//    {
//        this->name=name;
//        this->company=company;
//        this->age=age;
//    }


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


int main()
{
    employee one,two,three;
    one.setter("msa", "kuet", 32);
    two.setter("S", "dd", 12);


    one.getter();
    two.getter();
    cout<< "Promotion:";
    one.askFP();
    two.askFP();

    return 0;
}
