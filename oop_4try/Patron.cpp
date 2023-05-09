#include "Patron.h"

Patron::Patron()
{
	this->name = "";
}
Patron::Patron(string name)
{
	this->name = name;
}
Patron::Patron(const Patron* patron)
{
	this->name = patron->name;
}
void Patron::ReturnInfo() 
{
	printf("Патрон калибра %s\n",this->name.c_str());
}