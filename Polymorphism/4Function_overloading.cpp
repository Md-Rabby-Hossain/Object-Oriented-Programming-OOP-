//Question: Electrical power can be measured by the following equations:
                          //(i) p = vi,
                          //(ii) p = vi cosθ,
                          ///(iii) p = v²/R, and
                          //(iv) p = i²R
                          //where the symbols have their usual meanings. Write a C++ function to calculate power using function overloading.


#include <iostream>
#include <cmath>
using namespace std;

class PowerCalculator {
public:
    // Function 1: p = v * i
    double power(double v, double i) {
        return v * i;
    }

    // Function 2: p = v * i * cos(θ) - using different parameter types
    double power(double v, double i, double theta) {
        return v * i * cos(theta);
    }

    // Function 3: p = v² / R - using a wrapper class for resistance
    double power(double v, int R) {
        return (v * v) / R;
    }

    // Function 4: p = i² * R - using different parameter order
    double power(int R, double i) {
        return (i * i) * R;
    }
};

int main() {
    PowerCalculator pc;
    
    cout << "Power calculations using overloaded functions:" << endl;
    cout << "p = v * i: " << pc.power(12.0, 2.0) << " W" << endl;
    cout << "p = v * i * cos(θ): " << pc.power(120.0, 5.0, 0.8) << " W" << endl;
    cout << "p = v² / R: " << pc.power(24.0, 10) << " W" << endl;
    cout << "p = i² * R: " << pc.power(5, 3.0) << " W" << endl;
    
    return 0;
}
