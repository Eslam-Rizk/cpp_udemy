#include <iostream>

/*
$g++ mainArg.cpp -o mainArg
$ ./mainArg.exe arg1 arg2 arg3
Number of argements: 4
Argument 0: filePath\VScode workspace\cpp_udemy\mainArg\mainArg.exe
Argument 1: arg1
Argument 2: arg2
Argument 3: arg3
*/
int main(int argc, char *argv[])
{
std::cout<<"Number of argements: " << argc << "\n";

for(int i=0; i<argc; i++)
{
std::cout<<"Argument "<< i << ": " << argv[i]<<std::endl;
}
return 0;
}

