#include <iostream>
#include <vector>

int main()
{
    std::vector<std::string> name = {"I", " am", " Eslam!"};
    for (auto s : name)
    {
        std::cout << s;
    }
    std::cout << std::endl;

    return 0;
}