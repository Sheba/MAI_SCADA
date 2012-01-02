testlibrary: basecode.o
	g++ test/testfile.cpp -lpthread basecode.o -o testlibrary
	./testlibrary
	rm -f basecode.o
basecode.o: src/basecode.cpp
	g++ -c src/basecode.cpp -o basecode.o 

