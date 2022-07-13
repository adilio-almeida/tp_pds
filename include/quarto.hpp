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
  bool servico;
  string cliente;
public:

Quarto(int _numero = 0, int _checkout = 0, bool _ocupacao = false, string _cliente = "", bool _servico = false);

int get_numero();
int get_checkout();
bool get_ocupacao();
bool get_servico();
void set_servico(bool aux);
string get_cliente();
virtual void imprime_dados() = 0;
virtual double get_preco() = 0;

};

#endif