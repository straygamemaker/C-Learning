#include <iostream>

int main() {

    int x = 10; 
    int y = 5;

    if (x > 10 && y > 5) {
        std::cout << "x is greater than 10 and y is greater than 5" << std::endl;
    } else if (x == 10 && y == 5) {
        std::cout << "x is equal to 10 and y is equal to 5" << std::endl;
    } else {
        std::cout << "x is less than 10" << std::endl;
    }

    return 0;

}