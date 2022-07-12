#include <string>
#include <iostream>
// #include "entidades\quarto.cpp"
// #include "entidades\std.cpp"
// #include "entidades\vip.cpp"
// #include "entidades\hotel.cpp"
#include "../include/hotel.hpp"

using namespace std;

enum {
  checkIn = 1,
  checkOut = 2,
  quartosvaz = 3,
  quartosocu = 4,
  sair = 5,
};

int verifyInput(int command) {
  if(!command || (command != checkIn && command != checkOut && command != quartosvaz && command != quartosocu && command != sair) ) 
    return 0;
  return command;
}

int main() {

  Hotel hotel;

    int command = 0;
    while(command != sair) {
        
    cout << "\n------------------------------------------------------------" << endl;
    cout << "Bem vindo ao Hotel California!" << endl;
    cout << "-------------------------------------------------------------\n" << endl;
    cout << "O que deseja fazer?" << endl;
    cout << "1. CheckIn" << endl << "2. CheckOut" << endl  <<  "3. Ver quartos vazios" << endl;
    cout << "4. Ver quartos cheios"  << endl << "5. Sair" << endl;
    cin >> command;

    switch (verifyInput(command)) {
    case checkIn:
      hotel.faz_checkin();
      break;
    case checkOut:
      hotel.faz_checkout();
      break;
    case quartosvaz:
      hotel.imprime_quartos(false);
      break;
    case quartosocu:
      hotel.imprime_quartos(true);
      break;
    case sair:
      break;
    default:
      cout << "Comando invalido" << endl;
      main();
      break;
    }
    
    }

    return 0;
}