#include <string>
#include <iostream>
#include "entidades\quartos.cpp"
#include "entidades\STD.cpp"
#include "entidades\vip.cpp"
#include "entidades\hotel.cpp"

using namespace std;

enum {
  checkIn = 1,
  checkOut = 2,
  quartosvaz = 3,
  quartosocu = 4,
  servpendente = 5,
  servquarto = 6,
  pedirservquarto = 7, 
  sair = 8,
};

int verifyInput(int command) {
  if(!command || ( command < 0 || command > 8) ) 
    return 0;
  return command;
}

int main() {

  Hotel hotel;

    int command = 0;
    while(command != sair) {
        
    cout << "\n\nBem vindo ao hotel,\n";
    cout << "o que deseja fazer?\n" << "1. CheckIn\n" << "2. CheckOut\n" << "3. Ver quartos vazios\n";
    cout << "4. Ver quartos cheios\n" << "5. Ver servicos de quarto pendentes\n" << "6. Atender quarto\n" << "7. CLIENTE: Pedir servico de quarto \n8.Sair\n";
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
    case pedirservquarto:
      hotel.pedir_servQuarto();
      break;
    case servquarto:
      hotel.servicoQuarto();
      break;
    case servpendente:
      hotel.servicos_pendentes();
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