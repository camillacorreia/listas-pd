#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  int X, Y;
  cin >> X >> Y;
  
  if (X ==0 && Y==0) {
    cout << "Centro" << endl;
  } else {
    if (X > 0) {
      if (Y > 0) {
        cout << "Quadrante 1" << endl;
      } else {
        cout << "Quadrante 4" << endl;
      }
    } else {
      if (Y > 0) {
        cout << "Quadrante 2" << endl;
      } else {
        cout << "Quadrante 3" << endl;
      }
    }
  }
}