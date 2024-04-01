//cpp-basic-arithmetic
#include <iostream>
using namespace std;

int main() 
{
    // Declaration of variables
    int num1, num2, sum, difference, product;

    cout << "Enter first integer: ";
    cin >> num1;
    cout << "Enter second integer: ";
    cin >> num2;
    
    // Perform arithmetic operations
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;

    return 0;
}
