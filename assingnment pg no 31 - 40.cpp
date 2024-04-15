#include <iostream>
using namespace std;


void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}


void sortNumbers(int &num1, int &num2) {
    if (num1 > num2) {
        swap(num1, num2);
    }
}

int main() 
{
    int num1, num2;
    
    
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    
    
    sortNumbers(num1, num2);
    
    
    cout << "After Sort Number1 :  " << num1<< endl;
    cout << "After Sort Number2 :  " << num2 << '\n';
    
    return 0;
}
