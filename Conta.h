#include <bits/stdc++.h>
using namespace std;

class Conta {
private:
  double saldo;

public:
  int Id;
  Conta(int Id, double saldo = 0){
    this -> Id = Id;
    this -> saldo = saldo;
  }

  void creditar(double valor){
    saldo += valor;
  }
  void debitar(double valor){
    saldo -= valor;
  }
  bool podeRetirar(double valor){
    return saldo >= valor;
  }
  void getSaldo(int tempt){
    if (tempt == Id) cout << "Saldo: " << saldo << " R$\n";
    else cout << "Id incorreto!\n";
  }
};
