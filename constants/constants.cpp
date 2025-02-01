#include <iostream>
/*
Use Cases of constexpr
    1- Performance Optimization – Reduces runtime computation.
    2- Array Sizes – Used for compile-time array sizes.
    3-Template Metaprogramming – Helps in template-based calculations.
    4-Compile-Time Assertions – Ensures validity of values at compile time.
*/
constexpr int square(int n)
{
    return n * n;
}

// From C++14 onwards, constexpr functions can contain loops and more complex logic:
constexpr int factorial(int n)
{
    int res = 1;
    for (int i = 1; i <= n; ++i)
    {
        res *= i;
    }
    return res;
}

// You can use constexpr inside class constructors, making objects usable in constant expressions.
struct Point
{
    constexpr Point(int x, int y) : x_(x), y_(y) {}

    constexpr int getX() const { return x_; }
    constexpr int getY() const { return y_; }

private:
    int x_, y_;
};

// C++20 introduced consteval, which forces a function to be evaluated at compile time.
// I'm using c++17
/*
consteval int cube(int x)
{
    return x * x * x;
}*/

int main()
{
    constexpr int x = 10; // Compile-time constant // Same as: const int x = 10;
    constexpr double pi = 3.14159;

    constexpr int result = square(4);   // Computed at compile time
    constexpr int fact5 = factorial(5); // Computed at compile time

    constexpr Point p1(3, 4);
    constexpr int y = p1.getX(); // Computed at compile time

    // constexpr int val = cube(3); // Must be evaluated at compile time

    // cout all the values
    std::cout << "Square of 4: " << result << std::endl;
    std::cout << "Factorial of 5: " << fact5 << std::endl;
    std::cout << "X coordinate of p1: " << y << std::endl;
    // std::cout << "Cube of 3: " << val << std::endl;
}
