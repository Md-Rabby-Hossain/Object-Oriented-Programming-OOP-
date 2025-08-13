//inheritance
#include<iostream>
#include<string>
using namespace std;

class animal
{
protected:

    string name;
public:
//    animal(string n = "Not set yet...")  //constructor to set name..
//    {
//        name = n;
//    }
    void setter()                  // function to set name
    {
        cout<< "enter name of your animal: ";
        cin>> name;
    }


    virtual void makeasound()         //make it virtual.....
    {
        cout<< "Haha.."<<endl;
    }
};

class dog : public animal
{
public:
//    dog(string n = "dog"): animal(n){}

    void makeasound() override
    {
        if(name=="dog")
        {
            cout<< "Woof Woof"<< endl;
        }
        else if (name =="cat")
        {
            cout<< "meow meow"<<endl;
        }
        else if ( name == "gf")
        {
            cout<< "bok bok kore sob somoy"<<endl;
        }
        else
            cout<< "No sound for "<<name<<endl;
    }
};


//class cat: public animal
//{
//public:
////    cat(string n = "cat"):animal(n)
//
//    void makeasound() override
//    {
//        if(name=="cat")
//        {
//            cout<< "meow"<< endl;
//        }
//        else
//            cout<< "No sound for "<<name<<endl;
//    }
//};


int main()
{
    dog b,c,d;
    b.setter();
    b.makeasound();
    c.setter();
    c.maeksound();

    return 0;

}
