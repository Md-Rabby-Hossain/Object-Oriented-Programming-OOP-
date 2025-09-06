#include <iostream>
using namespace std;

class Box {
private:
    int length;   // private member

public:
    Box(int l) {
        length = l;
    }

    // declare friend function
    friend void printLength(Box b);
};

// friend function definition
void printLength(Box b) {
    // can access private member directly
    cout << "Length of box = " << b.length << endl;
}

int main() {
    Box b1(10);

    // friend function can access private member
    printLength(b1);

    return 0;
}
