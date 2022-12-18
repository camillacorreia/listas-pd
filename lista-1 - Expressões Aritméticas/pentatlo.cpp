#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  int X;
  double N1, N2, N3, N4, N5, media;
  cin >> X >> N1 >> N2 >> N3 >> N4 >> N5;

  media = (N1 + N2 + N3 + N4 + N5)/5;

  cout << X << ' ' << fixed << setprecision(1) << media << endl;
}