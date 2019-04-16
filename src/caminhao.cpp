#include <iostream>
#include "caminhao.hpp"

Caminhao::Caminhao()
{
  /* Espaço para ficar organizado */
  std::cout << "----------------------------------------------" << std::endl;
  std::cout << "Tipo Caminhao." << std::endl;
}

int Caminhao::getCapacidadeMaxima_() const
{
    return capacidadeMaxima_;
}

void Caminhao::setCapacidadeMaxima_(int value)
{
    capacidadeMaxima_ = value;
}
