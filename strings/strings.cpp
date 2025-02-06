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
    std::string s6(3, 'x');     // xxx

    std::cout << "s1: " << s1 << std::endl; // empty
    std::cout << "s2: " << s2 << std::endl; // frank
    std::cout << "s3: " << s3 << std::endl; // frank
    std::cout << "s4: " << s4 << std::endl; // fra
    std::cout << "s5: " << s5 << std::endl; // fr
    std::cout << "s6: " << s6 << std::endl; // xxx

    // methods
    std::cout << "s2.length(): " << s2.length() << std::endl;                    // 5
    std::cout << "s2.empty(): " << (s2.empty() ? "true" : "false") << std::endl; // false
    std::cout << "s2.substr(1, 2): " << s2.substr(1, 2) << std::endl;            // an
    std::cout << "s2.find('a'): " << s2.find('a') << std::endl;                  // 1
    std::cout << "s2.find('z'): "
              << (s2.find('z') == std::string::npos ? "npos" : std::to_string(s2.find('z')))
              << "..."
              << std::to_string(s2.find('z'))
              << std::endl;                                         // npos...18446744073709551615
    std::cout << "s2.compare(s2): " << s2.compare(s2) << std::endl; // 0 (equal)
    std::cout << "s2.compare(s3): " << s2.compare(s3) << std::endl; // -1 (s2 < s3)
    std::cout << "s2.erase(2,4):" << s2.erase(2, 4) << std::endl;
    std::cout << static_cast<char>(97) << std::endl; // a

    // input
    std::cout << "enter input1: " << std::endl;
    std::cin >> s2;                         // take input till the 1st apace
    std::cout << "s2: " << s2 << std::endl; // reads until space
    std::cin.ignore();                      // Ignore the newline character left in the buffer
    std::cout << "enter input2: " << std::endl;
    getline(std::cin, s2);                  // takes entire line
    std::cout << "s2: " << s2 << std::endl; // reads entire line

    // concatenate
    std::string s7 = s2 + " concatenated";
    std::cout << "s7: " << s7 << std::endl;

    // CAN'T concatenate only c-style strings, MUST have atleast 1 c++ string
    std::string str_concat;
    // str_concat = "c-style " + "string";   //invalid operands of types 'const char [9]' and 'const char [7]' to binary 'operator+'
    str_concat = "c-style " + s1 + " string";   //ok
    std::cout << str_concat << std::endl;

    return 0;
}