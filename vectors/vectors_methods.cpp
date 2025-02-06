#include <iostream>
#include <vector>
#include <algorithm> // For sort, find, reverse

int main() {
    // Initialize a vector
    std::vector<int> v = {10, 20, 30, 40, 50, 60, 70, 80};

    std::cout << "Original vector: ";
    for (int num : v) std::cout << num << " ";
    std::cout << "\n";

    // 1. Sort the vector in ascending order
    std::sort(v.begin(), v.end());
    std::cout << "Sorted vector: ";
    for (int num : v) std::cout << num << " ";
    std::cout << "\n";

    // 2. Reverse the vector
    std::reverse(v.begin(), v.end());
    std::cout << "Reversed vector: ";
    for (int num : v) std::cout << num << " ";
    std::cout << "\n";

    // 3. Find an element (e.g., 40)
    auto it = std::find(v.begin(), v.end(), 40);
    if (it != v.end())
        std::cout << "Element 40 found at index: " << std::distance(v.begin(), it) << "\n";
    else
        std::cout << "Element not found!\n";

    // 4. Erase an element (e.g., remove 40)
    v.erase(it);
    std::cout << "Vector after erasing 40: ";
    for (int num : v) std::cout << num << " ";
    std::cout << "\n";

    // 5. Resize the vector (reduce to 5 elements)
    v.resize(5);
    std::cout << "Vector after resizing to 5 elements: ";
    for (int num : v) std::cout << num << " ";
    std::cout << "\n";

    // 6. Push back elements
    v.push_back(100);
    v.push_back(200);
    std::cout << "Vector after push_back(100) and push_back(200): ";
    for (int num : v) std::cout << num << " ";
    std::cout << "\n";

    // 7. Insert element at position (e.g., insert 500 at index 2)
    v.insert(v.begin() + 2, 500);
    std::cout << "Vector after inserting 500 at index 2: ";
    for (int num : v) std::cout << num << " ";
    std::cout << "\n";

    // 8. Pop back (remove last element)
    v.pop_back();
    std::cout << "Vector after pop_back(): ";
    for (int num : v) std::cout << num << " ";
    std::cout << "\n";

    // 9. Clear the vector
    v.clear();
    std::cout << "Vector after clear(): Size = " << v.size() << "\n";

    return 0;
}
