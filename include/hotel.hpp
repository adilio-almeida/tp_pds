#ifndef HOTEL_H
#define HOTEL_H

#include <string>
#include <vector>
#include <exception>
#include "quarto.hpp"
#include "vip.hpp"
#include "std.hpp"

using namespace std;

class Erro : public std::exception {
  public:
  virtual const char* what() const noexcept {
    return "Erro Genérico!";
  }
};

class TipoQuartoInvalido :public Erro {
  public:
    virtual const char* what() const noexcept {
      return "O numero de quarto informado nao e o tipo pedido, tente novamente";
    }
};


class CheckoutInvalido :public Erro {
  public:
    virtual const char* what() const noexcept {
      return "Numero de dias invalido";
    }
};

class CheckInInvalido :public Erro {
  public:
    virtual const char* what() const noexcept {
      return "Ops, houve um erro no checkin, por favor tente novamente";
    }
};

class QuartoInvalido :public Erro {
  public:
    virtual const char* what() const noexcept {
      return "Numero de quarto invalido";
    }
};

class Hotel {
private:
  vector<Quarto*> quartos;
public:

Hotel();
void faz_checkin();
void faz_checkout();
void servicoQuarto();
void servicos_pendentes();
void pedir_servQuarto();
void imprime_quartos(bool ocupado);

};


#endif