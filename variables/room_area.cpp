#include <iostream>

int main()
{

    int length{};
    int width{};

    std::cout << "enter room length: " << std::endl;
    std::cin >> length;

    std::cout << "enter room width: " << std::endl;
    std::cin >> width;

    std::cout << "the area of the room is: " << length * width << std::endl;
    return 0;

    /*
    int length{};
    int width{};
    enter room width:
    23
    the area of the room is: 506

    enter room width:
    23
    the area of the room is: 506

    23
    the area of the room is: 506
    */
    /*
    enter room length:
    10 11
    enter room width:
    the area of the room is: 110
    */
    /*
    int length{};
    int width{};
    enter room length:
    10.5
    enter room width:
    the area of the room is: 0
    */
    /*
    int length{};
    int width{};
    enter room length:
    10 
    enter room width:
    10.5
    the area of the room is: 100
    */
    /*
    float length{};
    int width{};
    enter room length:
    10.5
    enter room width:
    10
    the area of the room is: 105
    */
}