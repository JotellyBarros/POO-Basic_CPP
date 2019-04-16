#include <iostream>
#include "automovel.hpp"

Automovel::Automovel()
{
  /* Espaço para ficar organizado */
  std::cout << "----------------------------------------------" << std::endl;
  std::cout << "Tipo Automovel." << std::endl;
}

float Automovel::getVelMaxima_() const
{
    return velMaxima_;
}

void Automovel::setVelMaxima_(float value)
{
    velMaxima_ = value;
}
