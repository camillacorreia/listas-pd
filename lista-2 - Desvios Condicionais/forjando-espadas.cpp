#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  int A, M, C, contador;
  cin >> A >> M >> C;

  contador = 0;
  
  while (A >= 2 && M >= 3 && C >= 5) {
    A = A - 2;
    M = M - 3;
    C = C - 5;
    
    contador++;
  }

  cout << contador << endl;
}