

#pragma once

#include <vector>
#include <string>
#include "Book.hpp"

using std::string;


namespace bs {

class BookStore {
public:
	BookStore();

	std::vector<Book> getAllBooks() const;
	std::vector<Book> getBooksByAuthor(const string& author) const;	

	void addBook(const Book& book);

private:
	std::vector<Book> collection;

};
}




