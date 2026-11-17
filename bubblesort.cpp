#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void bubbleS(vector<int>& vet, int ini){
    int j = vet.size()-1, i = j-1;
    if (ini >= i) return;
    while (ini <= i){
        if (vet[i] > vet[j]) swap(vet[i], vet[j]);
        i--; j--;
    }
    bubbleS(vet, ini+1);
}
int main(){
    vector<int> vet = {10, 3, 67, 90, 2, 5, 99, 98};
    bubbleS(vet, 0);
    for (int i:vet) cout<<i<<" ";
    return 0;
}