
all: ll_program

ll_program: ll_main.o ll.h ll.ipp
	g++ $< -o $@

test: lltest
	 ./lltest

lltest: test.o
	g++ $^ -o $@ -lgtest -lpthread -L/usr/local/lib

%.o: %.cpp ll.h ll.ipp
	g++ -c $< -o $@ -I/usr/local/include

clean:
	rm -f ./*.o lltest ll_program
