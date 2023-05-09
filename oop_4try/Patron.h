#pragma once
#include "Header.h"
class Patron
{
protected:
	string name;
public:
	Patron();
	Patron(string name);
	Patron(const Patron* patron);
	virtual Patron* clone()=0;
	virtual void ReturnInfo();
};

