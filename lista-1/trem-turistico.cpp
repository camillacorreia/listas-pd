#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int Q1, Q2, Q3, Q4, turistas;
  cin >> Q1 >> Q2 >> Q3 >> Q4;
  turistas = (Q1-6) + (Q2-6) + (Q3-6) + (Q4-6);
  cout << turistas << endl;
}