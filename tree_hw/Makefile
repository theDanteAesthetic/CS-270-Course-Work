
all: test

test: bstest
	./bstest

bstest: tests.o
	g++ $^ -o $@ -lgtest -lpthread -L/usr/local/lib

%.o: %.cpp binary_search_tree.hpp binary_search_tree.ipp
	g++ -c $< -o $@ -I/usr/local/include

clean:
	rm -f ./*.o bstest
