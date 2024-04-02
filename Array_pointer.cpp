#include <iostream>
using namespace std;
int main() 
{
    int SIZE = 5;
    int arr[SIZE] = {10,20,30,40,50};

    int *ptr= arr;

    cout << "Array elements using pointer arithmetic: "; 
    
    for (int i=0; i < SIZE; ++i) 
    {
        cout << *(ptr + i) << " "; 
    }


    return 0;
}
