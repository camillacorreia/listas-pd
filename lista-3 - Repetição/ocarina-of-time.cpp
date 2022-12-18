#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  string X, Y, Z;
  int N;
  cin >> X >> Y >> Z;
  cin >> N;

  for (int i = 0; i < N; i++) {
    cout << X << " " << Y << " " << Z << endl;
  }
}