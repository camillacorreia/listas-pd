#include <iomanip>
#include <iostream>

using namespace std;

int main() {
	int N, A, B, C, D, contador;
  contador = 0;
    
	cin >> N;
  
	for (int i=0; i<N; i++){
		cin >> A >> B >> C >> D;
		if (A+B+C+D >= 100){
			contador+= A-B-C-D;
		}
		else
		  contador+= A+B+C+D;
	}
	cout << contador <<" anos de vida";
}