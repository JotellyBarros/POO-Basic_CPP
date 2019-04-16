#include <iostream>
#include "caminhao.hpp"
#include "lancha.hpp"
#include "motocicleta.hpp"
#include "automovel.hpp"

int main()
{

  Motocicleta twister;
  twister.setEgine(true);
  twister.setCor_("Amarelo");
  twister.setMarca_("Honda");
  twister.setModelo_("CBX");
  twister.setCilindradas_(250);

  std::cout << "Marca: " << twister.getMarca_() << std::endl;
  std::cout << "Modelo: " << twister.getModelo_() << std::endl;
  std::cout << "Cor: " << twister.getCor_() << std::endl;
  std::cout << "Cilindradas: " << twister.getCilindradas_() << std::endl;
  std::cout << "Eguine: " << twister.getEgine() << std::endl;

  return 0;
}
