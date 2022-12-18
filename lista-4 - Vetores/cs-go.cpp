#include <iostream>
using namespace std;

int main() {
  int N, C, final = 0;

  cin >> N;

  int P[N];
  
  for (int i = 0; i < N; i++){
    cin >> P[i];
    final += P[i];
  }

  cin >> C;

  for (int i = 0; i < N; i++){
    if(P[i] == C) {
      final -= P[i] + C;
    }
  }

  cout << final << endl;
}