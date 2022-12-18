#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  int N, A, B, Matou, Morreu;
  Matou = 0;
  Morreu = 0;
  
  cin >> N;

  for (int i = 0; i < N; i++) {
    cin >> A >> B;

    if(A > B){
      Matou++;
    } else {
      Morreu++;
    }
  }

  if(Matou > Morreu){
    cout << "Sou barril dobrado" << endl;
  } else {
    cout << "Sou nube" << endl;
  }
}