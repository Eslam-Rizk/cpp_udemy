#include <iostream>
#include <iomanip>
#include <cmath>

/*
false1
true2
true3
0.30000001192092895508
*/
int main()
{
    float f = 0.1 + 0.2;
    if (f == 0.3) // Using a small epsilon value
        std::cout << "true1" << std::endl;
    else
        std::cout << "false1" << std::endl;

    if (f == 0.3f) // Using a small epsilon value
        std::cout << "true2" << std::endl;
    else
        std::cout << "false2" << std::endl;

    if (std::fabs(f - 0.3f) < 1e-6) // Using a small epsilon value
        std::cout << "true3" << std::endl;
    else
        std::cout << "false3" << std::endl;
    // print with precision 20f
    std::cout << std::fixed << std::setprecision(20) << f << std::endl;

    return 0;
}