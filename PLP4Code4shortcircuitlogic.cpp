#include <iostream>

int main() {
    int x = 5; // hardcoded
    int y = 15; // hardcoded

    if (x > 10 && y > 10) {
        std::cout << "x and y are greater than 10" << std::endl;
    } else {
        std::cout << "either x or y is not greater than 10" << std::endl;
    }

    if (x > 10 || y > 10) {
        std::cout << "either x or y is greater than 10" << std::endl;
    } else {
        std::cout << "neither x or y is greater than 10" << std::endl;
    }

    return 0;


}