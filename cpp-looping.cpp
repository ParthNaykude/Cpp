//cpp-looping
#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Multiplication table of " << n << endl;
    
    for (int i = 1; i <= 10; ++i) 
	{
        cout << n << " x " << i << " = " << n * i << endl;
    }
    return 0;
}
