#include <iostream>

// function overloading: Compiler depends on the different arguments to tell functions apart NOT return type
void display();
void display(int);
void display(double);
void display(char);
int display(std::string, int);

int main()
{
    display(12345);
    display(123.45);
    display('A');
    std::cout << "Number: " << display("Hello ", 5) << std::endl;
    return 0;
}

// function overloading

void display()
{
    std::cout << "No arguments" << std::endl;
}

void display(int num)
{
    std::cout << "Integer: " << num << std::endl;
}

void display(double num)
{
    std::cout << "Double: " << num << std::endl;
}

void display(char ch)
{
    std::cout << "Character: " << ch << std::endl;
}

int display(std::string str, int num)
{
    std::cout << "String: " << str << " Integer: " << num << std::endl;
    return num;
}