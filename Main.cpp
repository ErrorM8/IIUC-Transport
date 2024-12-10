#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

// Feedback class
class Feedback {
private:
    map<string, vector<string>> feedbackStorage;

public:
    void addFeedback(string userID, string feedback) {
        feedbackStorage[userID].push_back(feedback);
    }

    void displayFeedbacks() {
        for (auto& feedback : feedbackStorage) {
            cout << "User ID: " << feedback.first << endl;
            for (auto& fb : feedback.second) {
                cout << " - " << fb << endl;
            }
        }
    }
};

// Route class
class Route {
private:
    string routeID, startLocation, endLocation;

public:
    Route(string id, string start, string end) : routeID(id), startLocation(start), endLocation(end) {}

    void displayRoute() {
        cout << "Route ID: " << routeID << ", From: " << startLocation << " To: " << endLocation << endl;
    }

    string getRouteID() { return routeID; }
};

// Transport System class
class TransportSystem {
private:
    map<string, string> seatReservations; // userID -> routeID
    vector<Route> routes;
    Feedback feedbackSystem;

public:
    void addRoute(const Route& route) { routes.push_back(route); }

    void displayRoutes() {
        cout << "\nAvailable Routes:\n";
        for (auto& route : routes) {
            route.displayRoute();
        }
    }

    void reserveSeat(string userID, string routeID) {
        seatReservations[userID] = routeID;
        cout << "\nUser " << userID << " reserved a seat on Route " << routeID << endl;
    }

    void displaySeatReservations() {
        cout << "\nSeat Reservations:\n";
        for (auto& reservation : seatReservations) {
            cout << "User ID: " << reservation.first << ", Route ID: " << reservation.second << endl;
        }
    }

    void addFeedback(string userID, string feedback) {
        feedbackSystem.addFeedback(userID, feedback);
    }

    void displayFeedbacks() {
        cout << "\nUser Feedbacks:\n";
        feedbackSystem.displayFeedbacks();
    }
};

// Menus for different roles
void studentMenu(TransportSystem& system, string userID) {
    int choice;
    do {
        cout << "\n--- Student Menu ---\n";
        cout << "1. Reserve Seat\n2. Add Feedback\n3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            system.displayRoutes();
            string routeID;
            cout << "Enter Route ID to reserve seat: ";
            cin >> routeID;
            system.reserveSeat(userID, routeID);
            break;
        }
        case 2: {
            string feedback;
            cout << "Enter your feedback: ";
            cin.ignore();
            getline(cin, feedback);
            system.addFeedback(userID, feedback);
            break;
        }
        case 3:
            cout << "Exiting Student Menu...\n";
            break;

        default:
            cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 3);
}

void teacherMenu(TransportSystem& system, string userID) {
    int choice;
    do {
        cout << "\n--- Teacher Menu ---\n";
        cout << "1. Reserve Seat\n2. Add Feedback\n3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            system.displayRoutes();
            string routeID;
            cout << "Enter Route ID to reserve seat: ";
            cin >> routeID;
            system.reserveSeat(userID, routeID);
            break;
        }
        case 2: {
            string feedback;
            cout << "Enter your feedback: ";
            cin.ignore();
            getline(cin, feedback);
            system.addFeedback(userID, feedback);
            break;
        }
        case 3:
            cout << "Exiting Teacher Menu...\n";
            break;

        default:
            cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 3);
}

void staffMenu(TransportSystem& system, string userID) {
    int choice;
    do {
        cout << "\n--- Staff Menu ---\n";
        cout << "1. Reserve Seat\n2. Add Feedback\n3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            system.displayRoutes();
            string routeID;
            cout << "Enter Route ID to reserve seat: ";
            cin >> routeID;
            system.reserveSeat(userID, routeID);
            break;
        }
        case 2: {
            string feedback;
            cout << "Enter your feedback: ";
            cin.ignore();
            getline(cin, feedback);
            system.addFeedback(userID, feedback);
            break;
        }
        case 3:
            cout << "Exiting Staff Menu...\n";
            break;

        default:
            cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 3);
}

void hostMenu(TransportSystem& system) {
    int choice;
    do {
        cout << "\n--- Host Menu ---\n";
        cout << "1. Display Reservations\n2. Display Feedbacks\n3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            system.displaySeatReservations();
            break;
        case 2:
            system.displayFeedbacks();
            break;
        case 3:
            cout << "Exiting Host Menu...\n";
            break;

        default:
            cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 3);
}

void displayMainMenu() {
    cout << "-------------------\n";
    cout << "      Who are you? \n";
    cout << "-------------------\n";
    cout << "1. Student\n2. Teacher\n3. Staff\n4. Jashim Uncle\n";
    cout << "Enter your choice: ";
}

int main() {
    TransportSystem system;

    // Adding some sample routes
    system.addRoute(Route("R001", "IIUC", "Oxygen"));
    system.addRoute(Route("R002", "IIUC", "Chowkbazar"));
    system.addRoute(Route("R003", "IIUC", "2No. Gate"));

    while (true) {
        displayMainMenu();

        int roleChoice;
        cin >> roleChoice;

        string userID;
        if (roleChoice != 4) {
            cout << "Enter your User ID: ";
            cin >> userID;
        }

        switch (roleChoice) {
        case 1:
            studentMenu(system, userID);
            break;
        case 2:
            teacherMenu(system, userID);
            break;
        case 3:
            staffMenu(system, userID);
            break;
        case 4:
            hostMenu(system);
            break;
        default:
            cout << "Invalid choice! Try again.\n";
        }
    }

    return 0;
}
