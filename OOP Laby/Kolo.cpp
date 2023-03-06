#include "Kolo.h"

static double pi = 3.14159265358979;

Kolo::Kolo(double r)
	: r(r)
{
	std::cout << "Konstruktor Kola (" << r << ")" << std::endl;
}

double Kolo::GetR() const { return r; }
void Kolo::SetR(double r) { this->r = r; }

double Kolo::Obwod()
{
	return 2 * pi * r;
}
double Kolo::Obwod(double new_r)
{
	return 2 * pi * new_r;
}
double Kolo::Pole()
{
	return pi * r * r;
}

void Kolo::Wypisz(std::ostream& out) const {
	out << "Kolo o promieniu " << r << std::endl;
}

Kolo::~Kolo()
{
	std::cout << "Zniszczono: ";
	Wypisz(std::cout);
}