#include <iostream>
using namespace std;

class Animal 
{
public:
    void eat() 
    {
        cout << "Animal is eating..." << endl;
    }
    void sleep() 
    {
        cout << "Animal is sleeping..." << endl;
    }
};

class Dog : public Animal 
{
public:
    void bark()
    {
        cout << "Dog is barking..." << endl;
    }
};

int main() 
{
    Dog dog;

    dog.eat();   
    dog.sleep(); 
    dog.bark();  

    return 0;
}
