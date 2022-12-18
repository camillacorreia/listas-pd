#include <iostream>
using namespace std;

int main() {
  int N, F;

  cin >> N;

  int padawans[N];

  for (int i = 0; i < N; i++) {
    cin >> padawans[i];
  }

  cin >> F;

  for (int i = 0; i < N; i++) {
    double yoda = F / 2.0;
    if (padawans[i] >= yoda) {
      cout << i << " ";
    }
  }
}