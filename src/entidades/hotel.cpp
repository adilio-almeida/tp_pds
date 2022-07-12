#include <string>
#include <iostream>

#include "../../include/hotel.hpp"


using namespace std;

Hotel::Hotel()
{

    for (int i = 0; i <= 20; i++){
        Quarto *a = new QuartoVIP(i + 80, 0, false, "SUS");
        quartos.push_back(a);
    }
    
    for (int i = 0; i < 80; i++){
        Quarto *a = new QuartoSTD(i, 0, false, "SUS");
        quartos.push_back(a);
    }


}

void Hotel::faz_checkin()
{

    int numq = 0;
    int numdias = 0;
    char tip;
    string nome;

    cout << "Para fazer um checkin, digite por favor:\n \n 1. Um numero de quarto disponivel \n 2. Um tipo de quarto: ";
    cout << "S para Standard e V para VIP (Numeros 80 a 99) \n"
         << " 3. Quantos dias voce pretende ficar\n 4. Seu nome \n " << endl;
    cin >> numq;
    cin >> tip;
    cin >> numdias;
    cin >> nome;

    if (numq < 1 || numq > 99)
        throw(QuartoInvalido());

    if (numdias < 1)
        throw(CheckoutInvalido());

    if (quartos[numq]->get_ocupacao())
        throw(QuartoInvalido());

    if (tip != 'S' && tip != 'V' && tip != 's' && tip != 'v')
        throw(QuartoInvalido());

    delete quartos[numq];

    if (tip == 'V' || tip == 'v'){
        if (numq < 80)
            throw(TipoQuartoInvalido());
        Quarto *b = new QuartoVIP(numq, numdias, true, nome);
        quartos[numq] = b;
    }
    else if (tip == 'S' || tip == 's'){
        Quarto *c = new QuartoSTD(numq, numdias, true, nome);
        quartos[numq] = c;
    }
    else
        throw(CheckInInvalido());
}

void Hotel::faz_checkout(){

    cout << "\nDigite o numero de um quarto ocupado para fazer checkout\n";
    int n;
    cin >> n;

    if (n < 0 || n > 99 || quartos[n]->get_ocupacao() == 0)
        throw(CheckoutInvalido());

    double preco = quartos[n]->get_checkout() * quartos[n]->get_preco();

    cout << "\nDados do quarto:";
    quartos[n]->imprime_dados();
    cout<< "\nVoce tem certeza que deseja realizar o Checkout?\nDigite 'S' para confirmar\n";
    
    char confirmacao;
    cin >> confirmacao;

    if(confirmacao == 'S' || confirmacao == 's'){

        delete quartos[n];
        Quarto *a = new QuartoSTD();
        quartos[n] = a;

        cout << "\nO preco total da estadia foi de " << preco << " reais.\nAgradecemos sua estadia e volte sempre!\n\n";
    }
    else{
        cout << "Checkout Cancelado!";
    }
}

void Hotel::imprime_quartos(bool ocupado){

    cout << endl;

    if (ocupado){
        int x = 0;
        for (int i = 0; i < 100; i++){
            if (quartos[i]->get_ocupacao()){
                quartos[i]->imprime_dados();
                x++;
            }
        }
        if(!x)
            cout << "\nO hotel estah vazio ;-;\n";
    }

    else{
        for (int i = 1; i < 10; i++){
            if (quartos[i]->get_ocupacao() == 0)
                cout << "|0" << quartos[i]->get_numero() << "| ";
            else
                cout << "     ";
        }

        for (int i = 10; i < 100; i++){
            if (quartos[i]->get_ocupacao() == 0)
                cout << "|" << quartos[i]->get_numero() << "| ";
            else{
                cout << "     ";
            }
            if ((i) % 10 == 0)
            cout << endl;
        }
        cout << endl;
    }

    cout << endl;
}