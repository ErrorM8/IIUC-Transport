#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Function prototypes
void studentMenu();
void teacherMenu();
void staffMenu();
void hostMenu();
void displayMainMenu();

int main() {
    int roleChoice;

    // Display the main menu
    displayMainMenu();
    cin >> roleChoice;

    // Navigate based on the user role
    switch (roleChoice) {
    case 1:
        cout << "Welcome, Student!\n";
        studentMenu();
        break;
    case 2:
        cout << "Welcome, Teacher!\n";
        teacherMenu();
        break;
    case 3:
        cout << "Welcome, Staff!\n";
        staffMenu();
        break;
    case 4:
        cout << "Welcome, Host!\n";
        hostMenu();
        break;
    default:
        cout << "Invalid choice! Exiting...\n";
        break;
    }

    return 0;
}

// Display the main menu
void displayMainMenu() {
    cout << "-------------------\n";
    cout << "      Who are you? \n";
    cout << "-------------------\n";
    cout << "1. Student\n";
    cout << "2. Teacher\n";
    cout << "3. Staff\n";
    cout << "4. Jashim Uncle\n";
    cout << "Enter your choice: ";
}

// Student menu
void studentMenu() {
    int choice;
    do {
        cout << "\n--- Student Menu ---\n";
        cout << "1. Reserve Seat\n";
        cout << "2. Select Route\n";
        cout << "3. Add Feedback\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Seat reserved successfully!\n";
            break;
        case 2:
            cout << "Route selected successfully!\n";
            break;
        case 3:
            cout << "Feedback added successfully!\n";
            break;
        case 4:
            cout << "Exiting Student Menu...\n";
            break;
        default:
            cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 4);
}

// Teacher menu
void teacherMenu() {
    int choice;
    do {
        cout << "\n--- Teacher Menu ---\n";
        cout << "1. Reserve Seat\n";
        cout << "2. Select Route\n";
        cout << "3. Add Feedback\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Seat reserved successfully!\n";
            break;
        case 2:
            cout << "Route selected successfully!\n";
            break;
        case 3:
            cout << "Feedback added successfully!\n";
            break;
        case 4:
            cout << "Exiting Teacher Menu...\n";
            break;
        default:
            cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 4);
}

// Staff menu
void staffMenu() {
    int choice;
    do {
        cout << "\n--- Staff Menu ---\n";
        cout << "1. Reserve Seat\n";
        cout << "2. Select Route\n";
        cout << "3. Add Feedback\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Seat reserved successfully!\n";
            break;
        case 2:
            cout << "Route selected successfully!\n";
            break;
        case 3:
            cout << "Feedback added successfully!\n";
            break;
        case 4:
            cout << "Exiting Staff Menu...\n";
            break;
        default:
            cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 4);
}

// Jashim Uncle(host) er menu
void hostMenu() {
    int choice;
    do {
        cout << "\n--- Host Menu ---\n";
        cout << "1. Add User\n";
        cout << "2. Add Vehicle\n";
        cout << "3. Add Route\n";
        cout << "4. Simulate Tracking\n";
        cout << "5. Schedule Maintenance\n";
        cout << "6. Display System Info\n";
        cout << "7. Display Feedback\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "User added successfully!\n";
            break;
        case 2:
            cout << "Vehicle added successfully!\n";
            break;
        case 3:
            cout << "Route added successfully!\n";
            break;
        case 4:
            cout << "Simulating tracking...\n";
            break;
        case 5:
            cout << "Maintenance scheduled!\n";
            break;
        case 6:
            cout << "Displaying system info...\n";
            break;
        case 7:
            cout << "Displaying feedback...\n";
            break;
        case 8:
            cout << "Exiting Host Menu...\n";
            break;
        default:
            cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 8);
}
