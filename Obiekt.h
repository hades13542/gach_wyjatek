#pragma once
#include <iostream>
#include "ObiektMiotajacy.h"
class Obiekt
{
public:
	Obiekt(){
		_nazwa=ObiektMiotajacy::get();
	}
	void Rzuc(){
		throw this;
	}
	void PrzedstawSie(){
		std::cout<<"Nazywam sie "<<_nazwa<<"\n";
	}
private:
	int _nazwa;
};