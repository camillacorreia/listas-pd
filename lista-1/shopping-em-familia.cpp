#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  float N, F1, F2, F3, F4, sobra;
  cin >> N >> F1 >> F2 >> F3 >> F4;
  sobra = (N-F1) + (N-F2) + (N-F3) + (N-F4);
  cout << fixed << setprecision(2) << sobra << endl;
}