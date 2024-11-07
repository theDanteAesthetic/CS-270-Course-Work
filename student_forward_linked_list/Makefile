
all: test

test: lltest
	./lltest

lltest: tests.o
	g++ $^ -o $@ -lgtest -lpthread -L/usr/local/lib

%.o: %.cpp ll.h ll.ipp
	g++ -c $< -o $@ -I/usr/local/include

clean:
	rm -f ./*.o lltest
