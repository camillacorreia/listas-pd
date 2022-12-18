#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  int N, X, XPmin, XP, Q;

  cin >> N >> X >> XPmin;

  for(int i=0; i < N; i++){
    cin >> XP >> Q;

    if(XP >= XPmin){
      cout << XP+X << " " << Q+1 << endl;
    } else {
      cout << XP << " " << Q << endl;
    }
  }
}