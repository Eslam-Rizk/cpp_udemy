#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec1;
    std::vector<int> vec2;

    vec1.push_back(1);
    vec1.push_back(2);
    vec1.push_back(3);

    vec2.push_back(4);
    vec2.push_back(5);
    vec2.push_back(6);

    std::vector<std::vector<int>> vec_2d;
    vec_2d.push_back(vec1);
    vec_2d.push_back(vec2);

    for (const std::vector<int> &sub_vec : vec_2d)
    {
        for (auto &num : sub_vec)
        {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
}