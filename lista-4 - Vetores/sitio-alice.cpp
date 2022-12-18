#include <iostream>
using namespace std;

int main() {
  int N, soma = 0, indice, somando = 0;

  cin >> N;

  int S[N];

  for (int i = 0; i < N; i++) {
    cin >> S[i];
    soma += S[i];
  }
  
  int metade = (soma/2);
  
  for (int i = 0; i < N; i++) {
    if(somando < metade){
      indice = i;
      somando += S[i];
    }
  }

  cout << indice+1 << endl;

}