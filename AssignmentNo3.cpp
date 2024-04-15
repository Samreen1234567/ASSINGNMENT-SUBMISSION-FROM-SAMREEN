#include <iostream>
using namespace std;

double calculateArea(double radius, double pi = 3.14159) {
    return pi * radius * radius;
}

int main() {
    double radius;

    cout << "Enter the radius of the circle: ";
    cin >> radius;
    double area = calculateArea(radius);

    cout << "Area of the circle: " << area << endl;

    return 0;
}
