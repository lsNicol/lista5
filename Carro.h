#include <bits/stdc++.h>
using namespace std;
class Carro {
private:
  int potencia;
  double velocidade;

public:
  string nome;
  Carro(std::string nome, int potencia, double velocidade) {
      this->nome = nome;
      this->potencia = potencia;
      this->velocidade = velocidade;
  }
  void acelerar(){
    velocidade += potencia;
  }
  void frear(){
    velocidade /= 2.0;
  }
  double getVelocidade(){
    velocidade = round(velocidade *10) / 10;
    return velocidade;
  }
  void informeVelocidade(){
    cout << "O carro " << nome << " esta a velocidade de " << velocidade << " km/h\n";
  }
};
