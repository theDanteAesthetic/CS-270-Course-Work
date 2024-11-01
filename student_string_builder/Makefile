
all: test

test: stringtest
	 ./stringtest

stringtest: tests.o mystring.o
	g++ $^ -o $@ -lgtest -lpthread -L/usr/local/lib

%.o: %.cpp mystring.h
	g++ -c $< -o $@ -I/usr/local/include

clean:
	rm -f ./*.o stringtest
