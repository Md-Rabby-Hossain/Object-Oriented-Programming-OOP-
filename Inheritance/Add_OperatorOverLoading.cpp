#include<iostream>
using namespace std;

class math
{
public:
    int add(int i, int j)
    {
        return i+j ;
    }
    float add(float i, float j)
    {
        return i+j;
    }
};


int main()
{
    math m;
    cout<< m.add(4,3)<<endl;
    cout<<m.add(4.3f,6.3f)<<endl;
    return 0;
}
