#include <iostream>
#include "lancha.hpp"

Lancha::Lancha()
{
  /* Espaço para ficar organizado */
  std::cout << "----------------------------------------------" << std::endl;
  std::cout << "Tipo Lancha." << std::endl;
}

int Lancha::getQtdMotor_() const
{
    return qtdMotor_;
}

void Lancha::setQtdMotor_(int value)
{
    qtdMotor_ = value;
}
