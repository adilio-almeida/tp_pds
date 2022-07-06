
INCLUDE = -I ./include*

output:  quartos.o vip.o hotel.o main.o 
	g++ ./build/quartos.o ./build/hotel.o  ./build/vip.o  ./build/main.o -o Programa

hotel.o: ./src/entidades/hotel.cpp
	g++ $(INCLUDE) -c ./src/entidades/hotel.cpp -o ./build/hotel.o
	
quartos.o: ./src/entidades/quartos.cpp
	g++ $(INCLUDE) -c ./src/entidades/quartos.cpp -o ./build/quartos.o

vip.o: ./src/entidades/vip.cpp
	g++ $(INCLUDE) -c ./src/entidades/vip.cpp -o ./build/vip.o

main.o: ./src/main.cpp
	g++ $(INCLUDE) -c ./src/main.cpp -o ./build/main.o




	
# INCLUDE = -I ./include*

# output: main.o Funcionario.o Professor.o Pessoa.o
# 	g++ ./build/main.o ./build/Funcionario.o ./build/Professor.o ./build/Pessoa.o -o vpl_execution

# main.o: ./src/main.cpp
# 	g++ $(INCLUDE) -c ./src/main.cpp -o ./build/main.o
	
# Funcionario.o: ./src/entidades/Funcionario.cpp
# 	g++ $(INCLUDE) -c ./src/entidades/Funcionario.cpp -o ./build/Funcionario.o
	
# Professor.o: ./src/entidades/Professor.cpp
# 	g++ $(INCLUDE) -c ./src/entidades/Professor.cpp -o ./build/Professor.o
	
# Pessoa.o: ./src/entidades/Pessoa.cpp
# 	g++ $(INCLUDE) -c ./src/entidades/Pessoa.cpp -o ./build/Pessoa.o