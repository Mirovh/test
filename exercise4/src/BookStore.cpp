

#include "BookStore.hpp"

namespace bs {

BookStore::BookStore() : collection(std::vector<Book>()) {}

std::vector<Book> BookStore::getAllBooks() const {
	return this->collection;
}

std::vector<Book> BookStore::getBooksByAuthor(const string& author) const {
	std::vector<Book> result {};

	for (auto book : collection) {
		if (book.getAuthor() == author) {
			result.emplace_back(book);
		}
	}

	return result;
}

void BookStore::addBook(const Book& book) {
	collection.emplace_back(book);
}


}

