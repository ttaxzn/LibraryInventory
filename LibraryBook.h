#ifndef LIBRARYBOOK_H
#define LIBRARYBOOK_H
#include<string>
class LibraryBook 
{
	public:
	LibraryBook();
    LibraryBook(std:: string booktitle, std::string bookauthor, std::string bookisbn);
    std::string getTitle() const;
    std::string getAuthor() const;
    std::string getISBN() const;
    void PrintInfo();
    void checkOut();
    void checkIn();
    bool isCheckedOut();
	private:
	std::string title;
	std::string author;
	std::string ISBN;
	bool checkedOut;
};
#endif