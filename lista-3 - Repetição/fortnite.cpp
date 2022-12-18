#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  int A, L;

  cin >> A >> L;

  for (int i = 0; i < A; i++) {
    for (int j = 0; j < L; j++) {
      cout << "X";
    }

    cout << endl;
  }