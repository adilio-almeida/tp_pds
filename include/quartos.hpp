#ifndef QUARTO_H
#define QUARTO_H

#include <string>
#include <iostream>

using namespace std;

class Quarto {

private:
  int _numero;
  int _checkout;
  bool _ocupacao;
  string _cliente;
public:
Quarto(int numero, int checkout, bool ocupacao, string cliente);

int get_numero();
int get_checkout();
bool get_ocupacao();
string get_cliente();
void set_ocupacao(bool);
void set_checkout(int);
void set_cliente(string);

void imprime_dados();

};

#endif