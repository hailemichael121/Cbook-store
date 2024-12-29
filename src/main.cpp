#include "../include/book_manager.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<Book> books;

    // Sample Test
    addBook(books, 1, "The Alchemist", "Paulo Coelho");
    addBook(books, 2, "1984", "George Orwell");
    addBook(books, 3, "To Kill a Mockingbird", "Harper Lee");
    addBook(books, 4, "Pride and Prejudice", "Jane Austen");
    addBook(books, 5, "The Great Gatsby", "F. Scott Fitzgerald");

    cout << "Listing all books:\n";
    listBooks(books);

    Book* book = searchBookByTitle(books, "1984");
    if (book) {
        borrowBook(*book);
        returnBook(*book);
    } else {
        cout << "Book not found.\n";
    }

    return 0;
}
