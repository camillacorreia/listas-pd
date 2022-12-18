#include <iostream>
using namespace std;

int main() {
  int N, M;

  cin >> N;

  int valores[N];

  for (int i = 0; i < N; i++) {
    cin >> valores[i];
  }

  cin >> M;

  int res = valores[M -1];

  cout << res << endl;
}