#include "../../include/hotel.hpp"
#include <string>
#include <iostream>
#include "../../include/quartos.hpp"
#include "../../include/vip.hpp"

using namespace std;

Hotel::Hotel() {
    
    for(int i = 0 ; i < 100 ; i++) {
        
        quartos.push_back(Quarto(i, 0, false, "SUS"));

    }

}
bool Hotel::faz_checkin() {
    return false;
}

bool Hotel::faz_checkout() {
    return false;
}

void Hotel::imprime_quartos(bool ocupado) {

    for(int i = 0 ; i < 100 ; i++) {
        cout << quartos[i].get_numero() << endl;
    }

}