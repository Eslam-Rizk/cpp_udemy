#include <iostream>

#include <cstring> // for strlen(), strcpy(), strcat()
#include <string>

// #include <cstdlib>  // for exit()

// #include <ctime>    // for time()

int main()
{
    // C-style strings
    char str[80];
    strcpy(str, "Hello ");
    strcat(str, "there");
    std::cout << "str length: " << strlen(str) << std::endl;
    std::cout << "strcmp(str, \"another\"): " << strcmp(str, "another") << std::endl;

    // c++ strings
    std::string s1;             // empty
    std::string s2{"frank"};    // frank
    std::string s3{s2};         // frank
    std::string s4{"frank", 3}; // fra
    std::string s5{s3, 0, 2};   // fr
    std::string s6{3, 'x'};     // xxx

    std::cout << "s1: " << s1 << std::endl;
    std::cout << "s2: " << s2 << std::endl;
    std::cout << "s3: " << s3 << std::endl;
    std::cout << "s4: " << s4 << std::endl;
    std::cout << "s5: " << s5 << std::endl;
    std::cout << "s6: " << s6 << std::endl;
    return 0;
}