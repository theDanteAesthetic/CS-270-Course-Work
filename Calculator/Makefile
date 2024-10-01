CC=g++

TARGET = calculator

all: $(TARGET)

$(TARGET): calculator.cpp calculator_test.cpp
	$(CC) -o $(TARGET) calculator.cpp calculator_test.cpp -L/usr/local/lib -lgtest -lpthread

clean:
	rm $(TARGET)
