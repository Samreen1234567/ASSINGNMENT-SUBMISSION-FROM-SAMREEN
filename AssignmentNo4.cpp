#include <iostream>
#include <string>
using namespace std;

int max(int a, int b, int c) {
    if (a >= b && a >= c) {
        return a;
    } else if (b >= a && b >= c) {
        return b;
    } else {
        return c;
    }
}

string max(string a, string b, string c) {
    if (a >= b && a >= c) {
        return a;
    } else if (b >= a && b >= c) {
        return b;
    } else {
        return c;
    }
}

int main() {
    
    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    cout << "Maximum number: " << max(num1, num2, num3) << endl;

    string str1, str2, str3;
    cout << "Enter three strings: ";
    cin >> str1 >> str2 >> str3;
    cout << "Maximum string: " << max(str1, str2, str3) << endl;

    return 0;
}
