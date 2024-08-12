#include <iostream>
using namespace std;

// Function prototypes
void addRoom();
void removeRoom();
void displayMenu();

int main() {
    int choice;

    while (true) {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addRoom();
                break;
            case 2:
                removeRoom();
                break;
            case 3:
                cout << "Exiting program..." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}

// Function to add a room to the system
void addRoom() {
    cout << "Adding a room..." << endl;
    // Code to add a room (to be completed in Unit 6)
}

// Function to remove a room from the system
void removeRoom() {
    cout << "Removing a room..." << endl;
    // Code to remove a room (to be completed in Unit 6)
}

// Function to display the menu
void displayMenu() {
    cout << "\n--- Hotel Management System ---" << endl;
    cout << "1. Add Room" << endl;
    cout << "2. Remove Room" << endl;
    cout << "3. Exit" << endl;
}
