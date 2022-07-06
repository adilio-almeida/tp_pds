#ifndef QUARTO_H
#define QUARTO_H

#include <string>
#include <iostream>

using namespace std;


class Quarto {
protected:
  int numero;
  int checkout;
  bool ocupacao;
  string cliente;
public:

Quarto(int _numero = 0, int _checkout = 0, bool _ocupacao = false, string _cliente = "");

int get_numero();
int get_checkout();
bool get_ocupacao();
string get_cliente();

void imprime_dados();

};

#endif