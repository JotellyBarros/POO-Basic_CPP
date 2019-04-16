#ifndef MOTOCICLETA_HPP
#define MOTOCICLETA_HPP
#include "veiculo_automotor.hpp"

/* Um Veiculo motocicleta. Herda de Veiculo_automotor */
class Motocicleta : public Veiculo_automotor
{
public:
  Motocicleta();

  float getCilindradas_() const;
  void setCilindradas_(float value);

private:
  float cilindradas_;

};

#endif // MOTOCICLETA_HPP
