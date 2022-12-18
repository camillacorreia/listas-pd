#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  int N, S, H, M;
  H = 0;
  M = 0;
  
  cin >> N;

  for (int i = 0; i < N; i++) {
    cin >> S;
    if (S == 1) {
      H++;
    }

    if (S == 2) {
      M++;
    }
  }
  
  cout << H << endl;
}