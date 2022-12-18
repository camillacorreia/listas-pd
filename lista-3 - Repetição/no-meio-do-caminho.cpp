#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  int N, K, HI, contador;
  contador = 0;

  cin >> N >> K;

  for (int i = 0; i < N; i++) {
    cin >> HI;
    if (HI > K) {
      contador++;
    }
  }

  if (contador > 0) {
    cout << "Você não vai passar!!!" << endl;
  } else {
    cout << "Tá safe, o caminho é izi!!!" << endl;
  }
}