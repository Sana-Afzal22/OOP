
# include<iostream>
using namespace std ;
class Wheel {
public:
    void display() {
        cout << "Wheel is working" << endl;
    }
};

class Car {
public:
    Wheel wheel; // Aggregation

    void display() {
        cout << "Car is working" << endl;
        wheel.display(); // Using Wheel class
    }
};

int main() {
    Car car;
    car.display();
    return 0;
}

