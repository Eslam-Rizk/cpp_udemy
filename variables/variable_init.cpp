#include <iostream>

int main()
{
    int age1;
    int age2 = 21;
    int age3(); // constructor initialization
    int age3_();
    int age4(21);
    int age4_ = (21, 22, 23);
    int age5{};
    int age6{21};
    int age7 = {21};
    // int age7 = {21,22,23}; //error: too many initializer variables
    // cout all
    std::cout << "age1; " << age1 << "\n";
    std::cout << "age2 = 21; " << age2 << "\n";
    std::cout << "age3(); " << age3 << "\n";
    std::cout << "age3_(); " << age3_ << "\n";
    std::cout << "age4(21); " << age4 << "\n";
    std::cout << "age4_= (21,22,23); " << age4_ << "\n";
    std::cout << "age5{}; " << age5 << "\n";
    std::cout << "age6{21}; " << age6 << "\n";
    std::cout << "age7 = {21}; " << age7 << "\n";
}