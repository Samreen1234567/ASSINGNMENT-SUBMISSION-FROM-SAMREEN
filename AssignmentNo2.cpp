#include <iostream>
using namespace std;

inline int multiply(int a, int b) {
    return a * b;
}

int main() {
    int num1, num2;
    
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    
    int result = multiply(num1, num2);
    
    cout << "Result of multiplication: " << result << endl;
    
    return 0;
}
