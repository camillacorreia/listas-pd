#include <iostream>
using namespace std;

int main() {
  int N, M, count;

  cin >> N >> M;

  count = M;

  int L[N], lembrados[M];

  for (int i = 0; i < N; i++) {
    cin >> L[i];
  }

  for (int i = N; i > 0; i--) {
    if(count > 0) {
      if(L[i-1] != 0){
        lembrados[count-1] = L[i-1];
        count-=1;
      }
    }
  }

  for(int i = 0; i < M; i++){
    cout << lembrados[i] << " ";
  }
}