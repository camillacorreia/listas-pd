#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  double N, res;
  cin >> N;

  if (N >= 1850.00) {
    cout << "Passou o Limite" << endl;
  } else {
    res = 1850.00 - N;
    cout << fixed << setprecision(2) << res << " de limite disponivel" << endl;
  }
}