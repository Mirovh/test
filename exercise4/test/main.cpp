
#define CONFIG_CATCH_MAIN

#include <lest.hpp>
#include <Book.hpp>
#include <BookStore.hpp>
#include <iostream>


using bs::Book;
using bs::BookStore;


const lest::test tests[] = {
	CASE("Basic book test") { 
		Book b {"Name", "Author", 1999};

		EXPECT( b.getTitle() == "Name" );
		EXPECT( b.getAuthor() == "Author" );
		EXPECT( b.getPublicationYear() == 1999 );
	},
	CASE("Basic bookstore test") { 
		BookStore bs {};


		bs.addBook({"Book 1", "Author 1", 2000});
		bs.addBook({"Book 2", "Author 1", 2010});
		bs.addBook({"Book 3", "Author 2", 1900});
		bs.addBook({"Book 4", "Author 3", 1476});


		EXPECT( bs.getAllBooks().size() == 4ul );
		EXPECT( bs.getBooksByAuthor("Author 1").size() == 2ul );
		EXPECT( bs.getBooksByAuthor("Author 2").size() == 1ul );
		EXPECT( bs.getBooksByAuthor("Author 3").size() == 1ul );

		EXPECT( bs.getBooksByAuthor("Author 4").size() == 0ul );

		EXPECT( bs.getBooksByYear(2019).size() == 0ul );
		EXPECT( bs.getBooksByYear(2000).size() == 1ul );
	}
};

int main(int argc, char* argv[]) {
	int result = lest::run(tests, argc, argv);

	if (result) {
		std::cout << result << " tests have failed." << std::endl;
	} else {
		std::cout << "All tests have passed!" << std::endl;
	}
}
