#include "../include/book_manager.h" // Include the header file
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<Book> books; // Declare books once
    int roleOption;

    cout << "Select Role:\n";
    cout << "1. Admin\n";
    cout << "2. User\n";
    cout << "Enter your role: ";
    cin >> roleOption;

    if (roleOption == 1) { // Admin Role
        handleAdminOptions(books); // Ensure this function is declared
    } else if (roleOption == 2) { // User Role
        handleUserOptions(books); // Ensure this function is declared
    } else {
        cout << "Invalid role! Exiting...\n";
    }

    return 0;
}
