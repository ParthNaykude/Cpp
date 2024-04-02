#include <iostream>

int main() 
{
    int number = 10;
    int *ptr;

    ptr = &number;

    std::cout << "Value of number = " << *ptr << std::endl;
    std::cout<<"address of number = "<<&number<<std::endl;

    *ptr = 20;
    std::cout << "Changed value of number: " << number << std::endl;

    return 0;
}
