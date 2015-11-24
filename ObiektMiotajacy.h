#pragma once
#include <iostream>

class ObiektMiotajacy
{
public:
	ObiektMiotajacy(){
		_nazwa=count++;
	}
	void Rzuc(){
		throw this;
	}
	void PrzedstawSie(){
		std::cout<<"Nazywam sie "<<_nazwa<<"\n";
	}
	static int get(){
		return count++;
	}
private:
	static int count;
	int _nazwa;
};