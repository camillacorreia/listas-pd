#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  int N, total, novo;

  cin >> N;
  total = 0;
  
  if(N == 0){
   cout << 0 << endl;
  } else {
   for(int i=0; i < N; i++){
    cin >> novo;
    total = total + novo;
   }
   cout << total << endl;
  }
}