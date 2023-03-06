#pragma once
#include "FiguraPlaska.h"

class Kolo :
    public FiguraPlaska
{
private:
    double r;

protected:
    void Wypisz(std::ostream& out) const override;

public:
    Kolo(double r);

    double GetR() const;
    void SetR(double r);

    double Obwod() override;
    double Obwod(double new_r);
    double Pole() override;

    ~Kolo() override;
};

