#include "Prostokat.h"
#include "Trojkat.h"
#include "Kolo.h"

#include <iostream>

int main()
{
	Prostokat P(3, 4);
	Trojkat* T = new Trojkat(4, 4, 3);
	Kolo K(3.3);

	FiguraPlaska* figury[3] = { &P, T, &K };

	std::cout << P.Obwod() << "\n" << T->Pole() << "\n";

	for (auto figura : figury)
	{
		std::cout << figura->Obwod() << "\n";
		std::cout << figura->Pole() << "\n";
	}

	std::cout << K.Obwod() << "\n" << K.Obwod(1.1) << "\n";

	delete T;
}
