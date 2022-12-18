#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  string X, Y, W, Z;
  cin >> X >> Y;
  cin >> W >> Z;

  if((X == "e" && W == "e") || (X == "d" && W == "d")){
    cout << "Nave 1 desviou" << endl;
  } else {
    cout << "Nave 1 destruida" << endl;
  }

  if((Y == "e" && Z == "e") || (Y == "d" && Z == "d")){
    cout << "Nave 2 desviou" << endl;
  } else {
    cout << "Nave 2 destruida" << endl;
  }