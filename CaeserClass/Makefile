all: caesar

test: caesartest
	 ./caesartest

caesar: caesar_main.o Caesar.o
	g++ $^ -o $@

caesartest: caesar_test.o Caesar.o
	g++ $^ -o $@ -lgtest -lpthread -L/usr/local/lib

%.o: %.cpp
	g++ -c $^ -o $@ -I/usr/local/include

clean:
	rm -f ./*.o caesar caesartest
