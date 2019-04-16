#include <iostream>
#include "motocicleta.hpp"

Motocicleta::Motocicleta()
{
  /* Espaço para ficar organizado */
  std::cout << "----------------------------------------------" << std::endl;
  std::cout << "Tipo motocicleta." << std::endl;
}

float Motocicleta::getCilindradas_() const
{
  return cilindradas_;
}

void Motocicleta::setCilindradas_(float value)
{
  cilindradas_ = value;
}
