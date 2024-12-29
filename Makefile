all: library

library: src/book_manager.o src/utility.o
	g++ -o library src/book_manager.o src/utility.o

src/book_manager.o: src/book_manager.cpp include/book_manager.h
	g++ -c src/book_manager.cpp

src/utility.o: src/utility.cpp include/utility.h
	g++ -c src/utility.cpp

clean:
	rm -f library src/*.o