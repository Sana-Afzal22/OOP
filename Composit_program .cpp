#include <iostream>

class Room {
public:
    void describe() {
        std::cout << "This is a room." << std::endl;
    }
};

class House {
private:
    Room livingRoom;  // House has a living room
    Room bedroom;     // House has a bedroom
public:
    void describeHouse() {
        std::cout << "House description: " << std::endl;
        livingRoom.describe();
        bedroom.describe();
    }
};

int main() {
    House myHouse;
    myHouse.describeHouse();
    return 0;
}