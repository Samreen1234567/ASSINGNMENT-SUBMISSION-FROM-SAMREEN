#include <iostream>
using namespace std;

class DISTANCE {
private:
    int feet;
    float inches;
public:
    void inputDistance() {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }

    void outputDistance() {
        cout << "Feet: " << feet << " Inches: " << inches <<    endl;
    }

    DISTANCE addDistance(const DISTANCE& d2) {
        DISTANCE result;
        result.feet = feet + d2.feet;
        result.inches = inches + d2.inches;
        
        if (result.inches >= 12) {
            result.feet += 1;
            result.inches -= 12;
        }
        
        return result;
    }
};

int main() {
    DISTANCE d1, d2, sum;

    cout << "Enter details for first distance:" <<    endl;
    d1.inputDistance();

    cout << "\nEnter details for second distance:" <<    endl;
    d2.inputDistance();

    sum = d1.addDistance(d2);

    cout << "\nSum of distances:" <<    endl;
    sum.outputDistance();

    return 0;
}
