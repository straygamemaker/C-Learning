#include <iostream>
#include <string>
using namespace std;

// the function
int multiply(int a, int b) {
    return a * b;
}
// recursive func
int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

// func to split a string
pair<string, string> splitString(const string &input) {
    int middle = input.length() / 2;
    string part1 = input.substr(0, middle);
    string part2 = input.substr(middle);
    return make_pair(part1, part2);
} 

// func to see pass by or not
void passByValueOrReference(int &x) {  
    x = x + 10;
}

int main() {
    //main 
    int num1 = 5, num2 = 4;
    int product = multiply(num1, num2);
    cout << "Product of " << num1 << " and " << num2 << " is: " << product << endl;

    // calling factorial
    int number = 5;
    int fact = factorial(number);
    cout << "Factorial of " << number << " is: " << fact << endl;

    // calling string split
    string inputString = "HelloWorld";
    pair<string, string> result = splitString(inputString);
    cout << "First part: " << result.first << ", Second part: " << result.second << endl;

    // pass by reference or pass by value
    int value = 20;
    passByValueOrReference(value);
    cout << "Value after function call: " << value << endl;  // If modified, it's pass-by-reference; else, it's pass-by-value

    return 0;
}