#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int employeeId;
    float salary;

public:

    void setData(string empName, int empId, float empSalary) {
        name = empName;
        employeeId = empId;
        salary = empSalary;
    }

    void displayData() {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << employeeId << endl;
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    Employee emp;
    string name;
    int id;
    float salary;

    cout << "Enter Employee Name: ";
    getline(cin, name);
    cout << "Enter Employee ID: ";
    cin >> id;
    cout << "Enter Employee Salary: $";
    cin >> salary;

    emp.setData(name, id, salary);

    cout << "\nEmployee Details:" << endl;
    emp.displayData();

    return 0;
}
