#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  int pista, correr, res;
  cin >> pista >> correr;

  if (pista > correr) {
    cout << correr << endl;
  } else {
    res = correr%pista;

    cout << res << endl;
  }
}