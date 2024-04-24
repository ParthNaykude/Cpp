#include <iostream>
using namespace std;

class Car {
    private:
        string brand;
        string model;
        int year;

    public:
        void setCarDetails(string carBrand, string carModel, int carYear) {
            brand = carBrand;
            model = carModel;
            year = carYear;
        }

        void displayCarDetails() {
            cout << "Car Details:" << endl;
            cout << "Brand: " << brand << endl;
            cout << "Model: " << model << endl;
            cout << "Year: " << year << endl;
        }
};

int main() {
    Car myCar;

    myCar.setCarDetails("hpnda", "Dzire", 2004);

    myCar.displayCarDetails();

    return 0;
}
