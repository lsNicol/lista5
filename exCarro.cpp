#include <bits/stdc++.h>
#include "Carro.h"
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  Carro carro1("Marquinhos", 10, 0);
  Carro carro2("Mart", 20, 1);
  carro1.acelerar();
  carro2.frear();
  cout << carro1.nome << ": " << carro1.getVelocidade() << "\n";
  cout << carro2.nome << ": " << carro2.getVelocidade() << "\n";
  carro2.acelerar();
  carro1.frear();
  carro1.informeVelocidade();
  carro2.informeVelocidade();
  return 0;
}
