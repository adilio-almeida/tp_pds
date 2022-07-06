#ifndef QUARTO_H
#define QUARTO_H

#include <string>
#include <iostream>

class Quarto {
private:
  int numero;
  int checkout;
  bool ocupacao;
  std::string cliente;
public:

Quarto();
Quarto(int numero, int _checkout, bool _ocupacao, std::string _cliente);

int get_numero();
int get_checkout();
bool get_ocupacao();
std::string get_cliente();

void imprime_dados();

};

#endif