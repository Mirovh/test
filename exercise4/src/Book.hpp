
#pragma once


#include <string>
#include <iostream>

using std::string;

namespace bs {

class Book {
public:

	Book(const string& title, const string& author, const int& publication_year);

	string getTitle() const;
	string getAuthor() const;
	int getPublicationYear() const;

	friend std::ostream& operator<<(std::ostream& os, const Book& book);
private:
	string title;
	string author;
	int publication_year;
};

}
