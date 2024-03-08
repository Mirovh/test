
#include "BookStore.hpp"
#include "Book.hpp"


int main() {
	
	bs::BookStore store {};
	store.addBook(bs::Book {"Max Havelaar", "Multatuli", 1860});
	store.addBook(bs::Book {"1984", "George Orwell", 1949});
	store.addBook(bs::Book {"Lord of the Flies", "William Golding", 1954});

	auto result = store.getBooksByAuthor("Multatuli");

	std::cout << "Books written by Multatuli: " << std::endl;
	for (auto book : result) {
		std::cout << '\t' << book << std::endl;
	}
	return 0;
}

