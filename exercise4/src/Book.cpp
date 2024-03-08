

#include "Book.hpp"


namespace bs {

Book::Book(const string& title, const string& author, const int& publication_year) : title(title), author(author), publication_year(publication_year) {}


string Book::getTitle() const {
	return this->title;
}

string Book::getAuthor() const {
	return this->author;
}

int Book::getPublicationYear() const {
	return this->publication_year;
}


std::ostream& operator<<(std::ostream& os, const Book& book) {
	os << '\'' << book.getTitle() << '\'' << ", written by \'" << book.getAuthor() << "\' in " << book.getPublicationYear();
	return os;
}

}
