#include <iostream>
using namespace std;
struct book
{

    int id, year;
    string title, author;
    float price;
    bool avability;
};

struct member
{

    int id, num_of_the_borrowed_book;
    string name;
};
book books[100];
member members[50];
int bookcounter = 0;
int membercounter = 0;

void addBook()
{
    if (bookcounter >= 100)
    {
        cout << "it is full u cant add a new book\n";
        return;
    }
    books[bookcounter].id = bookcounter + 1;
    books[bookcounter].avability = true;
    cout << "enter the name of ur book";
    cin.ignore();
    getline(cin, books[bookcounter].title);
    cout << "enter the name of the author ";
    cin >> books[bookcounter].author;
    cout << "enter the year of the published book";
    cin >> books[bookcounter].year;
    cout << "enter the price";
    cin >> books[bookcounter].price;
    bookcounter++;
    cout << "the book got add succesfully";
}
void displaytheBooks()
{
    if (bookcounter == 0)
    {

        cout << "there is no avalible books rn";
        return;
    }
    cout << "status | price | the published yr | the author | the address | the num of the book ";
    cout << "******************************************\n";
    for (int i = 0; i < bookcounter; i++)
    {
        cout << books[i].id << "  " << books[i].author << " | " << books[i].price << "  " << books[i].year << "  " << books[i].avability << "  ";
    }
}

void searchBook()
{
    if (bookcounter == 0)
    {
        string searchTitle;
        cout << "the name of the book that ur searching for ";
        cin.ignore();
        getline(cin, searchTitle);
        bool found = false;
        getline(cin, searchTitle);
    }
}