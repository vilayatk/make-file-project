CC=g++ -std=c++11

output: LSP\ voilation/Employee.o main.o
	g++ main.o LSP\ voilation/Employee.o -o output

LSP\ voilation/Employee.o: LSP\ voilation/Employee.cpp LSP\ voilation/Employee.h
	$(CC) -c LSP\ voilation/Employee.cpp

main.o:
	$(CC) -c main.cpp