#include <iostream>
using namespace std;

int main() {
  int N, cont = 0;

  cin >> N;

  int u[N], v[N], d[N];

  for (int i = 0; i < N; i++) {
    cin >> u[i];
  }

  for (int i = 0; i < N; i++) {
    cin >> v[i];
  }

  for (int i = 0; i < N; i++) {
    cin >> d[i];
  }

  for (int i = 0; i < N; i++) {
    if (u[i] + v[i] != d[i]) {
      cont = 1;
      break;
    }
  }

  if (cont == 1) {
    cout << "NOPE :(" << endl;
  } else {
    cout << "OK" << endl;
  }
}