#include <iostream>
#include <vector>

int main()
{
    std::vector<char> names1;
    std::vector<char> names2(3);
    std::vector<int> nums1;
    std::vector<int> nums2(3);

    // cout all
    for (char name : names1)
    {
        std::cout << "names1: " << name << ",";
    }
    std::cout << std::endl;
    for (char name : names2)
    {
        std::cout << "names2: " << name << ",";
    }
    std::cout << std::endl;

    for (int num : nums1)
    {
        std::cout << "nums1: " << num << ",";
    }
    std::cout << std::endl;
    for (int num : nums2)
    {
        std::cout << "nums2: " << num << ",";
    }
    std::cout << std::endl;

    std::cout << "4th element: " << nums2[4] << std::endl;
    try
    {
        std::cout << "4th element: " << nums2.at(4) << std::endl;
    }
    catch (const std::out_of_range &e)
    {
        std::cerr << "Exception: " << e.what() << '\n';
    }

    return 0;
}