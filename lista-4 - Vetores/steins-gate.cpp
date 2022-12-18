#include <iostream>
using namespace std;

int main() {
  int N, P, soma = 0;

  cin >> N;

  int codigo[N];

  for (int i = 0; i < N; i++) {
    cin >> codigo[i];
  }

  cin >> P;

  for(int i = 0; i<P; i++){
    soma += codigo[i];
  }

  if (soma % 2 == 0){
    cout << "tutturu";
  } else{
    cout << "SERN";
  }
}