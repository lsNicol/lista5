#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void selectionS(vector<int>& vet){
    int ini=0, fim=vet.size()-1;
    while (ini<fim){
        int men = ini;
        for (int i=ini+1; i<=fim; i++){
            if (vet[i]<vet[men]) men = i;
        }
        swap(vet[ini], vet[men]);    
        ini++;
    }    
}
int main(){
    vector<int> vet = {10, 3, 6, 7, 90, 2, 5, 99, 9, 8};
    selectionS(vet);
    for (int i:vet) cout<<i<<" ";
    return 0;
}