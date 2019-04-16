#include <iostream>
#include "veiculo_automotor.hpp"

Veiculo_automotor::Veiculo_automotor()
{
  std::cout << "Tipo Veiculo_automotor." << std::endl;
}

void Veiculo_automotor::darPartida()
{
  std::cout << "Motor Ligado." << std::endl;
  setEgine(true);
}

std::string Veiculo_automotor::getCor_() const
{
    return cor_;
}

void Veiculo_automotor::setCor_(const std::string &value)
{
    cor_ = value;
}

std::string Veiculo_automotor::getMarca_() const
{
    return marca_;
}

void Veiculo_automotor::setMarca_(const std::string &value)
{
    marca_ = value;
}

std::string Veiculo_automotor::getModelo_() const
{
    return modelo_;
}

void Veiculo_automotor::setModelo_(const std::string &value)
{
    modelo_ = value;
}

std::string Veiculo_automotor::getEgine() const
{
  if (egine_) {
      return "Ligado";
    } else {
      return "Desligado";
    }
}

void Veiculo_automotor::setEgine(bool egine)
{
  egine_ = egine;
}
