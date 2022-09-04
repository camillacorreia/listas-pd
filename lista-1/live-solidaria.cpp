#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  double E, res;
  cin >> E;

  res = E/1000;
  cout << fixed << setprecision(2) << res << endl;
}