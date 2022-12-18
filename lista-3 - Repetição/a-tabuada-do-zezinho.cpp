#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  int N;

  cin >> N;

  for(int i=0; i < 101; i++){
    cout << N*i << endl;
  }
}