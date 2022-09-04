#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  int A, D, HP;
  double soma, res;
  cin >> A >> D >> HP;
  soma = A + D + HP;

  res = (soma*100)/45;
  cout << fixed << setprecision(1) << res << '%' << endl;
}