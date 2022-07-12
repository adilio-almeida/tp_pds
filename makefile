
INCLUDE = -I ./include*

output: quarto.o std.o vip.o hotel.o main.o 
	g++ ./build/quarto.o ./build/std.o ./build/hotel.o ./build/vip.o ./build/main.o -o Programa

quarto.o: ./src/entidades/quarto.cpp
	g++ $(INCLUDE) -c ./src/entidades/quarto.cpp -o ./build/quarto.o

std.o: ./src/entidades/std.cpp
	g++ $(INCLUDE) -c ./src/entidades/std.cpp -o ./build/std.o

vip.o: ./src/entidades/vip.cpp
	g++ $(INCLUDE) -c ./src/entidades/vip.cpp -o ./build/vip.o

hotel.o: ./src/entidades/hotel.cpp
	g++ $(INCLUDE) -c ./src/entidades/hotel.cpp -o ./build/hotel.o
	
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