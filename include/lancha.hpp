#ifndef LANCHA_HPP
#define LANCHA_HPP
#include "veiculo_automotor.hpp"

/* Um Veiculo caminhão. Herda de Veiculo_automotor */
class Lancha : public Veiculo_automotor
{
public:
  Lancha();

  int getQtdMotor_() const;
  void setQtdMotor_(int value);

private:
  int qtdMotor_;

};
#endif // LANCHA_HPP
