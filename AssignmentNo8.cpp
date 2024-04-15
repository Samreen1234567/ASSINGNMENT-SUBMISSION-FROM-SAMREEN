#include <iostream>
#include <string>
using namespace std;

class EMPLOYEE {
private:
    int EMPCODE;
    string EMPNAME;
public:
    void getData() {
        cout << "Enter employee code: ";
        cin >> EMPCODE;
        cout << "Enter employee name: ";
        cin.ignore(); 
        getline(cin, EMPNAME);
    }

    void display() {
        cout << "Employee Code: " << EMPCODE << endl;
        cout << "Employee Name: " << EMPNAME << endl;
    }
};

int main() {
    
    EMPLOYEE EMP[6];

    for (int i = 0; i < 6; i++) {
        cout << "\nEnter details for employee " << i + 1 << ":" << endl;
        EMP[i].getData();
    }

    cout << "\nDetails of employees:" << endl;
    for (int i = 0; i < 6; i++) {
        cout << "\nEmployee " << i + 1 << ":" << endl;
        EMP[i].display();
    }

    return 0;
}
