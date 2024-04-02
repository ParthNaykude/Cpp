#include <iostream>
using namespace std;

int add(int a, int b) 
{
    return a + b;
}
int subtract(int a, int b) 
{
    return a - b;
}
int multiply(int a, int b) 
{
    return a * b;
}
int divide(int a, int b) 
{
    if (b == 0) 
    {
        std::cerr << "Error: Division by zero!\n";
        return 0;
    }
    return a/b;
}

int main() 
{
    int x = 10, y = 5;

    cout << "Sum=" << add(x, y) << endl;
    cout << "subtract= " << subtract(x, y) << endl;

    cout << "multiplication= " << multiply(x, y) << endl;
    cout << "Division= " << divide(x, y) << endl;

    return 0;
}
