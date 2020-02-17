#include <iostream>

double calculate(int x, int y = 10) {
    return x * y;
}

int main() {
    int result = calculate(20);
    std::cout << result << std::endl;
    int anotherResult = calculate(20, 11);
    std::cout << anotherResult << std::endl;
    return 0;
}