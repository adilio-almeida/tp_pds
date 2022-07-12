// #include <string>
// #include <iostream>

// #include <vector>
// #include <exception>

// using namespace std;


// class Erro : public std::exception {
//   public:
//   virtual const char* what() const noexcept {
//     return "Erro Genérico!";
//   }
// };

// class CheckoutInvalido :public Erro {
//   public:
//     virtual const char* what() const noexcept {
//       return "Numero de dias invalido";
//     }
// };

// class QuartoInvalido :public Erro {
//   public:
//     virtual const char* what() const noexcept {
//       return "Numero de quarto invalido";
//     }
// };


// class Quarto {
// protected:
//   int numero;
//   int checkout;
//   bool ocupacao;
//   string cliente;
// public:

// Quarto(int _numero = 0, int _checkout = 0, bool _ocupacao = false, string _cliente = "");

// int get_numero();
// int get_checkout();
// bool get_ocupacao();
// string get_cliente();
// void set_ocupacao(bool);
// void set_checkout(int);
// void set_cliente(string);

// void imprime_dados();

// };

// class QuartoVIP: public Quarto {
// protected:
//   string tipo;
//   double preco;
// public:

//   QuartoVIP(int _numero = 0, int _checkout = 0, bool _ocupacao = false , std::string _cliente = "SUS");
//   string get_tipo();
//   double get_preco();

// };


// class Hotel {
// private:

// std::vector<Quarto> quartos;

// public:

// Hotel();
// bool faz_checkin();
// bool faz_checkout();
// void imprime_quartos();

// };

// Hotel::Hotel() {
    
//     for(int i = 0 ; i < 100 ; i++) {
        
//         quartos.push_back(Quarto(i, 0, false, "SUS"));

//     }

// }

// bool Hotel::faz_checkin() {

//     int numq=0;
//     int numdias;
//     string nome;

//     cout << "Para fazer um checkin, digite um numero de quarto disponivel, \n quantos dias voce ira ficar e seu nome. " << endl;
//     cin >> numq;
//     cin >> numdias;
//     cin >> nome;

//     if(numq < 1 || numq > 99)
//         throw(QuartoInvalido());

//     if(numdias < 1 )
//         throw(CheckoutInvalido());

//     if(quartos[numq].get_ocupacao())
//         throw(QuartoInvalido());

//     quartos[numq].set_cliente(nome);
//     quartos[numq].set_ocupacao(true);
//     quartos[numq].set_checkout(numdias);

//   //   quartos.imprime_quartos();



//     return false;
// }

// bool Hotel::faz_checkout() {
//     return false;
// }

// void Hotel::imprime_quartos() {

//     for(int i = 0 ; i < 100 ; i++) 
//         cout << quartos[i].get_numero() << " " << quartos[i].get_ocupacao() << endl;
    

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


// void Quarto::set_ocupacao(bool i) {
//     ocupacao = i;
// }
// void Quarto::set_cliente(string cli) {
//     cliente = cli;
// }

// void Quarto::set_checkout(int i){
//     checkout = i;
// }


// QuartoVIP::QuartoVIP(int _numero, int _checkout, bool _ocupacao, std::string _cliente): Quarto(_numero, _checkout, _ocupacao, _cliente),
//  tipo("VIP"),
//  preco(10.00) {}

// std::string QuartoVIP::get_tipo() {
//     return tipo;
// }

// double QuartoVIP::get_preco() {
//     return preco;
// }



// enum {
//   checkIn = 1,
//   checkOut = 2,
//   quartos = 3,
//   sair = 4,
// };

// int verifyInput(int command) {
//   if(!command || (command != checkIn && command != checkOut && command != sair) ) 
//     return 0;
//   return command;
// }

// int main() {

//   // Quarto quarto(101, 5 ,true,"Joao"); 
//   Hotel hotel;

//     int command = 0;
//     while(command != sair) {
        
//     cout << "Bem vindo ao hotel" << endl;
//     cout << "O que deseja fazer?" << endl << "1: CheckIn" << endl << "2: CheckOut" << endl  <<  "3: Ver quartos" << endl  << "4: Sair" << endl;
//     cin >> command;

//     switch (verifyInput(command)) {
//     case checkIn:
//       hotel.faz_checkin();
//       break;
//     case checkOut:
//       hotel.faz_checkout();
//       break;
//     case quartos:
//       hotel.imprime_quartos();
//       break;
//     case sair:
//       break;
//     default:
//       cout << "Comando invalido" << endl;
//       main();
//       break;
//     }
    
//     }

//     return 0;
// }