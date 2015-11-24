#pragma once

#include "ObiektMiotajacy.h"
#include "Obiekt.h"
#include <iostream>

typedef Obiekt typ1;
typedef ObiektMiotajacy typ2;
typedef Obiekt typ3;
typedef ObiektMiotajacy typ4;

void Przetworz1(ObiektMiotajacy* obj){
  std::cout<<"Przetworz1 - wyjatek typu 2 o adresie: "<<obj<<"\n";
  throw obj;
}
void Przetworz1(Obiekt* obj){
  std::cout<<"Przetworz1 - wyjatek typu 1 o adresie: "<<obj<<"\n";
  throw obj;
}