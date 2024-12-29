#include "../include/book_manager.h"
#include <iostream>
using namespace std;

void addBook(vector<Book>& books, int id, const string& title, const string& author) {
    books.push_back({id, title, author, false});
    cout << "Book added successfully!\n";
}

Book* searchBookByAuthor(vector<Book>& books, const string& author) {
    for (auto& book : books) {
        if (book.author == author) return &book;
    }
    return nullptr;
}

void listBooks(const vector<Book>& books) {
    for (const auto& book : books) {
        cout << "ID: " << book.id << ", Title: " << book.title << ", Author: " << book.author << ", Borrowed: " << (book.isBorrowed ? "Yes" : "No") << "\n";
    }
}

Book* searchBookByTitle(vector<Book>& books, const string& title) {
    for (auto& book : books) {
        if (book.title == title) return &book;
    }
    return nullptr;
}

void borrowBook(Book& book) {
    if (!book.isBorrowed) {
        book.isBorrowed = true;
        cout << "Book borrowed successfully!\n";
    } else {
        cout << "Book is already borrowed!\n";
    }
}

void returnBook(Book& book) {
    if (book.isBorrowed) {
        book.isBorrowed = false;
        cout << "Book returned successfully!\n";
    } else {
        cout << "Book was not borrowed!\n";
    }
}

void displayMenu() {
    cout << "\nLibrary Management System\n";
    cout << "1. Add Book\n";
    cout << "2. List Books\n";
    cout << "3. Search Book by Title\n";
    cout << "4. Search Book by Author\n";
    cout << "5. Borrow Book\n";
    cout << "6. Return Book\n";
    cout << "7. Exit\n";
    cout << "Select an option: ";
}

void handleUserInput(vector<Book>& books) {
    int option;
    while (true) {
        displayMenu();
        cin >> option;
        switch (option) {
            case 1: {
                int id;
                string title, author;
                cout << "Enter Book ID: ";
                cin >> id;
                cout << "Enter Title: ";
                cin.ignore();
                getline(cin, title);
                cout << "Enter Author: ";
                getline(cin, author);
                addBook(books, id, title, author);
                break;
            }
            case 2:
                listBooks(books);
                break;
            case 3: {
                string title;
                cout << "Enter Title: ";
                cin.ignore();
                getline(cin, title);
                Book* book = searchBookByTitle(books, title);
                if (book) {
                    cout << "Book found: " << book->title << " by " << book->author << "\n";
                } else {
                    cout << "Book not found!\n";
                }
                break;
            }
            case 4: {
                string author;
                cout << "Enter Author: ";
                cin.ignore();
                getline(cin, author);
                Book* book = searchBookByAuthor(books, author);
                if (book) {
                    cout << "Book found: " << book->title << " by " << book->author << "\n";
                } else {
                    cout << "Book not found!\n";
                }
                break;
            }
            case 5: {
                string title;
                cout << "Enter Title to Borrow: ";
                cin.ignore();
                getline(cin, title);
                Book* book = searchBookByTitle(books, title);
                if (book) {
                    borrowBook(*book);
                } else {
                    cout << "Book not found!\n";
                }
                break;
            }
            case 6: {
                string title;
                cout << "Enter Title to Return: ";
                cin.ignore();
                getline(cin, title);
                Book* book = searchBookByTitle(books, title);
                if (book) {
                    returnBook(*book);
                } else {
                    cout << "Book not found!\n";
                }
                break;
            }
            case 7:
                cout << "Exiting...\n";
                return;
            default:
                cout << "Invalid option!\n";
        }
    }
}