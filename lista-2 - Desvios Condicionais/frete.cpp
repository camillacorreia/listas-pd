#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  int A, B, C, sobra;
  cin >> A >> B >> C;

  sobra = 500 - A;
  
  cout << "Chegou a parada 1" << endl;
  
  if(sobra >= B) {
    cout << "Chegou a parada 2" << endl;
    sobra = sobra - B;
    if(sobra >= C) {
      cout << "Chegou a parada 3" << endl;
      sobra = sobra - C;
      cout << "Conseguiu com " << sobra << " litros de sobra!" << endl;
    } else {
      cout << "Nao foi possivel chegar ao seu destino :(" << endl;
    }
  } else {
    cout << "Nao foi possivel chegar ao seu destino :(" << endl;
  }
}