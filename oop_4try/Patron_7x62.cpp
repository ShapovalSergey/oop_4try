#include "Patron_7x62.h"

Patron_7x62::Patron_7x62() 
{
	this->name = "7,62";
}
Patron* Patron_7x62::clone() 
{
	return new Patron_7x62(*this);
}