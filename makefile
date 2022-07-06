
INCLUDE = -I ./src*

output: main.o clientes.o quartos.o
	g++ ./build/main.o ./build/clientes.o ./build/quartos.o -o Programa

main.o: ./src/main.cpp
	g++ $(INCLUDE) -c ./src/main.cpp -o ./build/main.o
	
clientes.o: ./src/clientes.cpp
	g++ $(INCLUDE) -c ./src/clientes.cpp -o ./build/clientes.o
	
quartos.o: ./src/quartos.cpp
	g++ $(INCLUDE) -c ./src/quartos.cpp -o ./build/quartos.o
	
