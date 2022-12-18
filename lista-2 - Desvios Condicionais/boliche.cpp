#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  int A, B, C, res;
  cin >> A >> B >> C;

  res = A*B;
  
  if (res >= (C+1)) {
    cout << "S" << endl;
  } else {
    cout << "N" << endl;
  }
}