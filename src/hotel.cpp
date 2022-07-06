#include "hotel.hpp"


Hotel::Hotel() {

    hospedes[100];

    for(int i = 0 ; i < 100 ; i++) {

        hospedes[i] = QuartoVIP(i,0,"NULL");

    }

}
bool Hotel::faz_checkin() {

}

bool Hotel::faz_checkout() {

}

void Hotel::imprime_quartos() {

}