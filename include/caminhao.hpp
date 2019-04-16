#ifndef CAMINHAO_HPP
#define CAMINHAO_HPP
#include "veiculo_automotor.hpp"

/* Um Veiculo caminhão. Herda de Veiculo_automotor */
class Caminhao : public Veiculo_automotor
{
public:
  Caminhao();

  int getCapacidadeMaxima_() const;
  void setCapacidadeMaxima_(int value);

private:
  int capacidadeMaxima_; //  pessoas

};

#endif // CAMINHAO_HPP
