#include <iostream>
#include <climits>
#include <cfloat>

/*
CHAR_MIN
CHAR_MAX
SHRT_MIN
SHRT_MAX
INT_MAX
INT_MIN
LONG_MAX
LONG_MIN
LLONG_MAX
LLONG_MIN
FLT_MAX
FLT_MIN
...
*/
int main() {
    int i{INT_MIN};
    unsigned  j{INT_MAX};

    std::cout<<"i = "<<i<<"\n" <<"j = "<<j<<"\n";
    // Printing maximum and minimum values for various data types
    std::cout << "CHAR_MIN: " << CHAR_MIN << std::endl;
    std::cout << "CHAR_MAX: " << CHAR_MAX << std::endl;
    std::cout << "SHRT_MIN: " << SHRT_MIN << std::endl;
    std::cout << "SHRT_MAX: " << SHRT_MAX << std::endl;
    std::cout << "UINT_MAX: " << UINT_MAX << std::endl;
    std::cout << "ULLONG_MAX: " << ULLONG_MAX << std::endl;
    std::cout << "SIZE_MAX: " << SIZE_MAX << std::endl;
    std::cout << "SSIZE_MAX: " << SIZE_MAX << std::endl;
    std::cout << "INT_MAX: " << INT_MAX << std::endl;
    std::cout << "INT_MIN: " << INT_MIN << std::endl;
    std::cout << "LONG_MAX: " << LONG_MAX << std::endl;
    std::cout << "LONG_MIN: " << LONG_MIN << std::endl;
    std::cout << "FLT_MAX: " << FLT_MAX << std::endl;
    std::cout << "FLT_MIN: " << FLT_MIN << std::endl;
    std::cout << "DBL_MAX: " << DBL_MAX << std::endl;
    std::cout << "DBL_MIN: " << DBL_MIN << std::endl;
    return 0;
}
