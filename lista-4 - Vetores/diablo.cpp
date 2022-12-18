#include <iostream>
using namespace std;

int main() {
  int Y, X, indice, maiorDano = 0;
  bool temDinheiro = false;

  cin >> Y;

  int V[Y], D[Y];

  for (int i = 0; i < Y; i++) {
    cin >> V[i];
  }

  for (int i = 0; i < Y; i++) {
    cin >> D[i];
  }

  cin >> X;

  for (int i = 0; i < Y; i++) {
    if(X >= V[i] && D[i] > maiorDano){
      maiorDano = D[i];
      temDinheiro = true;
      indice = i;
    }
  }

  if(temDinheiro){
    cout << V[indice] << " " << D[indice] << endl;
  } else {
    cout << "Yan Pobre" << endl;
  }
}