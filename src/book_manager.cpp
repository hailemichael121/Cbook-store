#include "../include/book_manager.h"
#include <iostream>
using namespace std;

void addBook(vector<Book>& books, int id, const string& title, const string& author) {
    books.push_back({id, title, author, false});
    cout << "Book added successfully!\n";
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