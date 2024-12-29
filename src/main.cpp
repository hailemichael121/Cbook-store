#include "../include/book_manager.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<Book> books;

    int roleOption;

    cout << "Select Role:\n";
    cout << "1. Admin\n";
    cout << "2. User\n";
    cout << "Enter your role: ";
    cin >> roleOption;

    if (roleOption == 1) {
        handleAdminOptions(books);
    } else if (roleOption == 2) {
        handleUserOptions(books);
    } else {
        cout << "Invalid role! Exiting...\n";
    }

    return 0;
}
