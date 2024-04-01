#include <iostream>
#include <iomanip>
using namespace std;

int main()
 {
    int num = 123;
    double pi = 3.14159;


    // setw()
    cout << "setw() example=" << setw(10) << num << endl;

    // setprecision()
    cout << "setprecision() example= " << setprecision(4) << pi << endl;

    // fixed
    cout << "fixed example= " << fixed << pi << endl;
    return 0;
}
