#include<iostream>

class Room {
    public:
    double length;
    double breadth;
    double height;

    double calculateArea() {
        return length * breadth;
    }

    double calculateVolume() {
        return length * breadth * height;
    }

};

int main() {
    Room room1;
    std::cout << "length of room:";
    std::cin >> room1.length;
    std::cout << "breadth of room:";
    std::cin >> room1.breadth;
    std::cout << "height of room:";
    std::cin >> room1.height;

    std::cout << "Area of the room: " << room1.calculateArea() << std::endl;
    std::cout << "Volume of the room: " << room1.calculateVolume() << std::endl;

    return 0;
}