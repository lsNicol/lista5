#include <bits/stdc++.h>
#include "Conta.h"
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  Conta conta1(1001);
  conta1.creditar(100);
  conta1.debitar(500);
  cout << (conta1.podeRetirar(1) ? "Pode retirar!" : "Saldo insuficiente!") << "\n";
  conta1.getSaldo(1);
  conta1.getSaldo(1001);
  return 0;
}
