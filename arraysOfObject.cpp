#include<iostream>
using namespace std;


class employee
{
    string name;
    int age;
public:

    void setter()
    {
        cout<< "Set name: ";
        cin>> name;
        cout<<endl;
        cout<< "Set age(int): ";
        cin>>age;
        cout<<endl;
    }

    void getter()
    {
        cout<< "Name is: "<< name<<endl;
        cout<< "Age is: "<<age<<endl;
    }
};


const int sz = 3;
int main()
{
    employee e[sz];
    for(int i=0;i<sz; i++)
    {
        cout<< "\nLets set details for employee: "<<i+1<<endl;
        e[i].setter();
    }
    cout<<endl;
    for(int i=0; i<sz; i++)
    {
        cout<<"\nEmployee: "<<i+1<<endl;
        e[i].getter();

    }
    return 0;

}
