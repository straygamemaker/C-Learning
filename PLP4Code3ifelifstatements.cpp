#include <iostream>

int main() {

    int x = 10; 

    if (x > 10) {
        std::cout << "x is greater than 10" << std::endl;
    } else if (x == 10) {
        std::cout << "x is equal to 10" << std::endl;
    } else {
        std::cout << "x is less than 10" << std::endl;
    }

    return 0;

}