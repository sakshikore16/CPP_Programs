#include <iostream>

using namespace std;

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapByReference(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapByAddress(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int num1ByValue = num1;
    int num2ByValue = num2;
    swapByValue(num1ByValue, num2ByValue);
    cout << "After swapping by value: num1 = " << num1ByValue << ", num2 = " << num2ByValue << std::endl;

    int num1ByReference = num1;
    int num2ByReference = num2;
    swapByReference(num1ByReference, num2ByReference);
    cout << "After swapping by reference: num1 = " << num1ByReference << ", num2 = " << num2ByReference << std::endl;

    int num1ByAddress = num1;
    int num2ByAddress = num2;
    swapByAddress(&num1ByAddress, &num2ByAddress);
    cout << "After swapping by address/pointer: num1 = " << num1ByAddress << ", num2 = " << num2ByAddress << std::endl;

    return 0;
}