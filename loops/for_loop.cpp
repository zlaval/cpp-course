#include <iostream>
#include <vector>

using namespace std;

int main() {
    std::vector<int> numbers{10, 20, 30, 40, 55, 60};

    for (auto number: numbers) {
        cout << number << " ";
    }


    return 0;
}