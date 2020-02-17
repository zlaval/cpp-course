#include <vector>
#include <iostream>

int main() {
    std::vector<int> numbers{10, 20, 30, 40, 55, 60};
    std::cout << numbers.at(3) << std::endl;
    numbers.at(2) = 31;
    numbers.push_back(77);
    int length = numbers.size();
    std::cout << "There are " << length << " element in the vector" << std::endl;

    for (unsigned int i{0}; i < numbers.size(); i++) {
        std::cout << numbers.at(i) << " ";
    }

    return 0;
};