# 📚 Library Management System

## 📖 Project Overview

The **Library Management System** is a terminal-based C++ application designed to manage a collection of books in a library. It allows **Admins** to add books and view the list, while **Users** can search, borrow, and return books with simple and interactive prompts.

---

## 🚀 Features

### 👨‍💼 Admin Features

- **Add Books**: Input book ID, title, and author.
- **List Books**: Display all available books.

### 👥 User Features

- **Search Books**: Search by title or author.
- **Borrow Books**: Borrow a book if it's available.
- **Return Books**: Return a borrowed book.
- **List Books**: View all books and their availability.

### 🎛️ Role Management

- Admin and User roles provide customized access to features.

### 💾 Data Management

- Maintains book details and availability during runtime.

---

## 🛠️ Build and Run Instructions

### 📂 Project Structure

```
MyCppProject/
├── src/
│   ├── main.cpp
│   ├── book_manager.cpp
│   ├── utility.cpp
├── include/
│   ├── book_manager.h
│   ├── utility.h
├── Makefile
├── .gitignore
└── README.md
```

### 🖥️ Compilation and Execution

1. **Clone the repository:**

```bash
git clone https://github.com/hailemichael121/Cbook-store.git
cd MyCppProject
```

2. **Build the project:**

```bash
make
```

3. **Run the application:**

```bash
./library
```

4. **Clean up compiled files:**

```bash
make clean
```

---

## 🖥️ Sample Terminal Outputs

### **Admin Role**

```
Select Role:
1. Admin
2. User
Enter your role: 1

Admin Menu
1. Add Book
2. List Books
3. Exit
Select an option: 1
Enter Book ID: 101
Enter Title: The Catcher in the Rye
Enter Author: J.D. Salinger
Book added successfully!

Admin Menu
1. Add Book
2. List Books
3. Exit
Select an option: 2
ID: 101, Title: The Catcher in the Rye, Author: J.D. Salinger, Borrowed: No
```

### **User Role**

```
Select Role:
1. Admin
2. User
Enter your role: 2

User Menu
1. List Books
2. Search Book by Title
3. Borrow Book
4. Return Book
5. Exit
Select an option: 2
Enter Title: The Catcher in the Rye
Book found: The Catcher in the Rye by J.D. Salinger

User Menu
1. List Books
2. Search Book by Title
3. Borrow Book
4. Return Book
5. Exit
Select an option: 3
Enter Title to Borrow: The Catcher in the Rye
Book borrowed successfully!

User Menu
1. List Books
2. Search Book by Title
3. Borrow Book
4. Return Book
5. Exit
Select an option: 4
Enter Title to Return: The Catcher in the Rye
Book returned successfully!
```

---

## 🧰 Dependencies

- **C++ Compiler**: `g++`
- **Make Utility**: `make`

---

## 📄 .gitignore Configuration

```
*.o
library
*.exe
*.log
*.tmp
```

---

## 📑 License

This project is licensed under the **MIT License**. Feel free to use and modify it.

---

## 👨‍💻 Author

- **Name**: Hailemichael
- **Email**: <yihunaashe@gmail.com>
- **GitHub**: [github.com/hailemichael121](https://github.com/hailemichael12)

---

## 🌟 Acknowledgments

Special thanks to everyone who contributed ideas and guidance throughout the development of this project.

---

### 📣 Feedback

If you find any issues or want to propose improvements, feel free to open an issue in the repository.
