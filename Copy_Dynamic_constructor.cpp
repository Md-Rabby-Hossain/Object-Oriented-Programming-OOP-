#include<iostream>
using namespace std;


class number
{
private:
    int *arr;
    int size;

public:
    number(int s)
    {
        size = s;
        arr = new int[size];                              //dynamic memory allocation......
        cout<< "Enter array:";
        for(int i=0; i<size; i++)
        {
            cin>>arr[i];
        }
    }


  // Copy Constructor (Deep Copy)
    number(const number &obj)
    {
        size = obj.size;
        arr = new int[size];  // allocate new memory
        for(int i=0; i<size; i++)
        {
            arr[i] = obj.arr[i];  // copy elements
        }
        cout<<"Copy constructor called!"<<endl;
    }


    void display()
    {
        cout<< "Array elements: "<<endl;
        for(int i =0; i<size; i++)
        {
            cout<<arr[i]<< " ";
        }
        cout<<endl;
    }

    ~number()
    {
        delete[] arr;
    }
};


int main()
{
    number n(4);
    number m = n;           //copy constructor

    n.display();
    m.display();
    return 0;
}
