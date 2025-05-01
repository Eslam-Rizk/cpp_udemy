// example of passing vector by reference

#include <iostream>
#include <vector>

void printVector(const std::vector<int> &v)
{
    // v.at(0)= 3;           //error: v is const for protection
    for (auto num : v)
        std::cout << num << std::endl;
    std::cout << " $ " << std::endl;
}

int main()
{
    std::vector<int> myVector = {1, 2, 3, 4, 5};
    printVector(myVector); // Call by reference

    // Modifying the vector inside the function
    myVector[2] = 10;
    printVector(myVector);

    return 0;
}