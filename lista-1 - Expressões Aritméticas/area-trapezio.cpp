#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int bMaior, bMenor, altura;
  float total, area;
  cin >> bMaior >> bMenor >> altura;
  total = (bMaior + bMenor)*altura;
  area = total/2;
  cout << "A=" << fixed << setprecision(1) << area << endl;
}