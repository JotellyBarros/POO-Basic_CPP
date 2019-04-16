#ifndef AUTOMOVEL_HPP
#define AUTOMOVEL_HPP
#include "veiculo_automotor.hpp"

/* Um Veiculo automóvel. Herda de Veiculo_automotor */
class Automovel : public Veiculo_automotor
{
public:
  Automovel();

  float getVelMaxima_() const;
  void setVelMaxima_(float value);

private:
  float velMaxima_;

};

#endif // AUTOMOVEL_HPP
