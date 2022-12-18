#include <iostream>
#include<iomanip>

using namespace std;

int main() {
  int A,B,C,D,E,F,H;
  float G;
  
  cin >> A >> B >> C >> D >> E >>F;
  
  H = (A+B)*(C-D)*(E+F); 
  G = H/2.0;
  
  cout<<"Eu sou FERA nas continhas e o resultado é "<<fixed<<setprecision(1)<<G<<endl;
}