#include <string>
#include <iostream>
#include "quartos.hpp"
#include "vip.hpp"
#include "hotel.hpp"

using namespace std;

enum {
  checkIn = 1,
  checkOut = 2,
  sair = 3,
};

bool verifyInput(int command) {
  if(!command || (command != checkIn && command != checkOut && command != sair) ) 
    return false;
  return command;
}

int main() {

  // while(1) {
    int command = 0;
    cout << "Bem vindo ao hotel" << endl;
    cout << "O que deseja fazer?" << endl << "1: CheckIn" << endl << "2: ChecOut" << endl  << "3: Sair" << endl;
    cin >> command;

    switch (verifyInput(command)) {
    case checkIn:
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
    

  // }

    // Quarto quarto(101, 5 ,true,"Joao"); 

  //  cout << quarto.get_nome();  // << endl << quarto.get_checkout() << endl << quarto.get_tipo();

    return 0;
}

