#include <iostream>
#include <fstream>
#include "LibraryBook.h"
#include "LibraryBook.cpp"
using namespace std;

int main() {

	ifstream fin("books.txt");
    ofstream fout("checkedout.csv");
    ifstream NUMS;
	string str;
	string title;
	string author;
	string isbn;
    string ISBN;
	int i;
    int j;
    string book;
	while(fin.good())
	{
	getline(fin, title);
	getline(fin, author);
	getline(fin, isbn);
	LibraryBook myBook(title, author, isbn);
    NUMS.open("isbns.txt");
    for(i=0; i<28; i++)
    {
        getline(NUMS, ISBN);
		if(myBook.getISBN()==ISBN)
		{
			if(myBook.isCheckedOut()==false)
			{
				myBook.checkOut();
			}
			else
			{
				myBook.checkIn();
			}
		}
    }
    if(myBook.isCheckedOut()==true)
            {
                string s=myBook.getTitle();
                s.erase(s.size()-1, '\n');
                string t=myBook.getAuthor();
                t.erase(t.size()-1, '\n');
                string u=myBook.getISBN();
                u.erase(u.size()-1, '\n');
        fout << "\"" << s << "\", " << "\"" << t<< "\", " << "\"" << u << "\"" << endl;
            }
    NUMS.close();
    
	}


	return 0;
}