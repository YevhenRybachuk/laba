#include <iostream>
#include <string>

using namespace std;

class Book {
private:
    string title;
    string author;
    int year;
public:
    Book() : Book("Unknown", "Unknown", 2025) {}

    Book(string t) : Book(t, "Unknown", 2025) {}

    Book(string t, string a) : Book(t, a, 2025) {}

    Book(string t, string a, int y) : title(t), author(a), year(y) {}

    ~Book() { cout << "Book destroyed: " << title << endl; }

    void display() const {
        cout << "Title: " << title << ", Author: " << author << ", Year: " << year << endl;
    }
};

class Author {
private:
    string name;
    string nationality;
public:
    Author() : Author("Unknown", "Unknown") {}

    Author(string n) : Author(n, "Unknown") {}

    Author(string n, string nat) : name(n), nationality(nat) {}

    ~Author() { cout << "Author destroyed: " << name << endl; }

    void show() const {
        cout << "Name: " << name << ", Nationality: " << nationality << endl;
    }
};

class Library {
private:
    string name;
    int numOfBooks;
public:
    Library() : Library("Unknown Library", 0) {}

    Library(string n) : Library(n, 0) {}

    Library(string n, int num) : name(n), numOfBooks(num) {}

    ~Library() { cout << "Library destroyed: " << name << endl; }

    void info() const {
        cout << "Library: " << name << ", Number of Books: " << numOfBooks << endl;
    }
};

int main() {

    Book book1("1984", "George Orwell", 1949);
    book1.display();

    Book book2("Faust", "Johann Georg Faust");
    book2.display();

    Book book3("Gamlet");
    book3.display();

    Author author1("George Orwell", "British");
    author1.show();

    Library library1("National Library of National University", 10000);
    library1.info();

    Library library2("Rivne Regional Universal Scientific Library");
    library2.info();

    return 0;
}
