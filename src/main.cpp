#include <string>
#include <iostream>
#include "../include/quartos.hpp"
#include "../include/vip.hpp"
#include "../include/hotel.hpp"

using namespace std;

enum {
  checkIn = 1,
  checkOut = 2,
  sair = 3,
};

int verifyInput(int command) {
  if(!command || (command != checkIn && command != checkOut && command != sair) ) 
    return 0;
  return command;
}

int main() {

  // Quarto quarto(101, 5 ,true,"Joao"); 
  Hotel hotel = Hotel();

    int command = 0;
    cout << "Bem vindo ao hotel" << endl;
    cout << "O que deseja fazer?" << endl << "1: CheckIn" << endl << "2: ChecOut" << endl  << "3: Sair" << endl;
    cin >> command;

    switch (verifyInput(command)) {
    case checkIn:
      hotel.imprime_quartos(true);
      cout << "checkIn" << endl;
      break;
    case checkOut:
      cout << "checkOut" << endl;
      break;
    case sair:
      cout << "Sair" << endl;
      break;
    default:
      cout << "Comando invalido" << endl;
      main();
      break;
    }

    // Quarto quarto(101, 5 ,true,"Joao"); 

  //  cout << quarto.get_nome();  // << endl << quarto.get_checkout() << endl << quarto.get_tipo();

    return 0;
}

