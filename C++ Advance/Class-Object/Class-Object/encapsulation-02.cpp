#include <iostream>
#include <string>

using namespace std;

class Book {
    private: 
        string title;
        string author;
        string isbn;
        int numCopies;

    public:
        Book(const string& title, const string& author, const string& isbn, int numCopies) : title(title), author(author), isbn(isbn), numCopies(numCopies) {}

        const string& getTitle() const {
            return title;
        }

        const string& getAuthor() const {
            return author;
        }

        const string& getISBN() const {
            return isbn;
        }

        int getNumCopies() const {
            return numCopies;
        }

        void setNumCopies(int num) {
            if(num >= 0){
                numCopies = num;
            }
        }

        bool borrow() {
            if(numCopies > 0) {
                numCopies--;
                return true;
            } else {
                return false;
            }
        }

        void returnBook() {
            numCopies++;
        }
};

int main() {

    Book book("Long Walk to Freedom", "Nelson Mandela", "9780345391803", 5);

    //printing the book details

    cout << "Title: " << book.getTitle() << endl;
    cout << "Author: " << book.getAuthor() << endl;
    cout << "ISBN: " << book.getISBN() << endl;
    cout << "Number of copies: " << book.getNumCopies() << endl;


    //Update the numebr of copies
    book.setNumCopies(20);
    cout << "Updated number of Copies of the Book: " << book.getNumCopies() << endl;
    

    // Borrow a book
    if(book.borrow()) {
        cout << "Borrowed successfully" << endl;
        cout << "Number of Copies: " << book.getNumCopies() << endl;
    } else {
        cout << "Borrow failed out of stock" << endl;
    }

    // Return a Book
    book.returnBook();
    cout << "Returned successfully " << endl;
    cout << "Numbers of Copies: " << book.getNumCopies() << endl;

    return 0;
}