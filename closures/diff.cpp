#include <iostream>
using namespace std;

int findDifference(int a, int b) {
    return a - b;
}

int main() {
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    int difference = findDifference(num1, num2);
    cout << "The difference between the two numbers is: " << difference << endl;

    return 0;
}