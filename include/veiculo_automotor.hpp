#ifndef VEICULO_AUTOMOTOR_HPP
#define VEICULO_AUTOMOTOR_HPP

class Veiculo_automotor
{
public:
  Veiculo_automotor();

  void darPartida();

  std::string getCor_() const;
  void setCor_(const std::string &value);

  std::string getMarca_() const;
  void setMarca_(const std::string &value);

  std::string getModelo_() const;
  void setModelo_(const std::string &value);

  std::string getEgine() const;
  void setEgine(bool egine);

private:
  bool egine_ = false; // Motor Ligado/Desligado
  std::string cor_;
  std::string marca_;
  std::string modelo_;

};

#endif // VEICULO_AUTOMOTOR_HPP
