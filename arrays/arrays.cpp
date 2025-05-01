#include <iostream>

int main()
{
    int arr1[5];
    int arr2[5] = {1, 2, 3, 4, 5};
    int arr3[] = {1, 2, 3, 4, 5};
    int arr4[5]{};
    int arr5[5]{0};
    int arr6[5]{1};
    int arr7[5]{1, 2, 3};
    int arr8[5] = {1};

    std::cout << "Array 1: ";
    for (int i = 0; i < 5; i++)
        std::cout << arr1[i] << " ";
    std::cout << std::endl;

    std::cout << "Array 2: ";
    for (int i = 0; i < 5; i++)
        std::cout << arr2[i] << " ";
    std::cout << std::endl;

    std::cout << "Array 3: ";
    for (int i = 0; i < 5; i++)
        std::cout << arr3[i] << " ";
    std::cout << std::endl;

    std::cout << "Array 4: ";
    for (int i = 0; i < 5; i++)
        std::cout << arr4[i] << " ";
    std::cout << std::endl;

    std::cout << "Array 5: ";
    for (int i = 0; i < 5; i++)
        std::cout << arr5[i] << " ";
    std::cout << std::endl;

    std::cout << "Array 6: ";
    for (int i = 0; i < 5; i++)
        std::cout << arr6[i] << " ";
    std::cout << std::endl;

    std::cout << "Array 7: ";
    for (int i = 0; i < 5; i++)
        std::cout << arr7[i] << " ";
    std::cout << std::endl;

    std::cout << "Array 8: ";
    for (int i = 0; i < 5; i++)
        std::cout << arr8[i] << " ";
    std::cout << std::endl;

    std::cout << arr8[6] <<std::endl;

    return 0;
}