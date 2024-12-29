#ifndef BOOK_MANAGER_H
#define BOOK_MANAGER_H

#include <string>
#include <vector>

struct Book {
    int id;
    std::string title;
    std::string author;
    bool isBorrowed;
};

void addBook(std::vector<Book>& books, int id, const std::string& title, const std::string& author);
void listBooks(const std::vector<Book>& books);
Book* searchBookByTitle(std::vector<Book>& books, const std::string& title);
void borrowBook(Book& book);
void returnBook(Book& book);
#endif