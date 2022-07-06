// #include <string>
// #include <iostream>

// using namespace std;


// class Quarto {
// private:
//   int numero;
//   int checkout;
//   bool ocupacao;
//   std::string cliente;
// public:

// Quarto();
// Quarto(int numero, int _checkout, bool _ocupacao, std::string _cliente);

// int get_numero();
// int get_checkout();
// bool get_ocupacao();
// std::string get_cliente();

// void imprime_dados();

// };

// class QuartoVIP : public Quarto {
// private:
//   std::string tipo;
//   double preco;
// public:

//   QuartoVIP();
//   QuartoVIP(int _numero, int _checkout, std::string cliente);
//   std::string get_tipo();
//   double get_preco();

// };


// Quarto::Quarto() {
//     numero=0;
//     checkout = 0;
//     ocupacao = 0;
//     cliente = "NULL";
// }

// Quarto::Quarto(int _numero, int _checkout, bool _ocupacao, std::string _cliente) {
    
//     numero = _numero;
//     checkout = _checkout;
//     ocupacao = _ocupacao;
//     cliente = _cliente;

// }

// int Quarto::get_numero() {
//     return numero;
// }

// int Quarto::get_checkout() {
//     return checkout;
// }

// bool Quarto::get_ocupacao() {
//     return ocupacao;
// }

// std::string Quarto::get_cliente() {
//     return cliente;
// }


// void Quarto::imprime_dados() {

//     std::cout << this->get_numero() << " " << this->get_ocupacao() << " " <<  this->get_checkout() 
//     << " " << this->get_cliente() << std::endl;

// }


// QuartoVIP::QuartoVIP(): Quarto(0, 0,1,"NULL"),
//  tipo("VIP"),
//  preco(10.0) {};

// QuartoVIP::QuartoVIP(int _numero, int _checkout, std::string cliente): Quarto(_numero, _checkout,true,cliente),
//  tipo("VIP"),
//  preco(10.0) {};


// std::string QuartoVIP::get_tipo() {
//     return tipo;
// }

// double QuartoVIP::get_preco() {
//     return preco;
// }

// int main() {

//     QuartoVIP a(101,5,"Joao"); 
//     a.imprime_dados();

//     return 0;
// }

