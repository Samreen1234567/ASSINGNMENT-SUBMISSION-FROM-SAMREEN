#include <iostream>
using namespace std;

class Item {
private:
    int number;
    float cost;
public:
    // Function to display data
    void putData() {
        cout << "Number: " << number << endl;
        cout << "Cost: $" << cost << endl;
    }

    // Friend function declaration to get data
    friend void getData(Item &item);
};

// Function definition to get data
void getData(Item &item) {
    cout << "Enter number: ";
    cin >> item.number;
    cout << "Enter cost: $";
    cin >> item.cost;
}

int main() {
    Item item;

    // Calling getData function to input data
    getData(item);

    // Displaying the entered data
    cout << "\nEntered data:" << endl;
    item.putData();

    return 0;
}
