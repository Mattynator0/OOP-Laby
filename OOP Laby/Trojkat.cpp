#include "Trojkat.h"

Trojkat::Trojkat(double a, double b, double c)
	: a(a), b(b), c(c)
{
	std::cout << "Konstruktor Trojkata (" << a << "," << b << "," << c << ")" << std::endl;
}

double Trojkat::GetA() const { return a; }
void Trojkat::SetA(double a) { this->a = a; }

double Trojkat::GetB() const { return b; }
void Trojkat::SetB(double b) { this->b = b; }

double Trojkat::GetC() const { return c; }
void Trojkat::SetC(double c) { this->c = c; }


double Trojkat::Obwod()
{
	return a + b + c;
}
double Trojkat::Pole()
{
	// Heron's formula
	double s = (a + b + c) / 2;
	return sqrt(s * (s - a) * (s - b) * (s - c));
}

void Trojkat::Wypisz(std::ostream& out) const {
	out << "Trojkat o bokach " << a << ", " << b << " i " << c << std::endl;
}

Trojkat::~Trojkat()
{
	std::cout << "Zniszczono: ";
	Wypisz(std::cout);
}