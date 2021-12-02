#include <iostream>
using namespace std;

#include "LibraryBook.h"

LibraryBook::LibraryBook()
{
    title=" ";
    author=" ";
    ISBN=" ";
    checkedOut=false;
}
LibraryBook::LibraryBook(string booktitle, string bookauthor, string bookisbn)
{
    title=booktitle;
    author=bookauthor;
    ISBN=bookisbn;
    checkedOut=false;
}

string LibraryBook::getTitle() const
{
    return title;
}

string LibraryBook::getAuthor() const
{
    return author;
}

string LibraryBook::getISBN() const
{
    return ISBN;
}

void LibraryBook::checkOut()
{
    checkedOut=true;
}

void LibraryBook::checkIn()
{
    checkedOut=false;
}

bool LibraryBook::isCheckedOut()
{
    return checkedOut;
}
void LibraryBook::PrintInfo()
{
    cout << title << endl;
}