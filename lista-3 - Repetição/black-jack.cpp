#include <iostream>
using namespace std;

int main() {
	int N, P, contadorA, contadorB;
  contadorA=0;
  contadorB=0;
  
	cin >> N;
  
	for (int i=0; i<N; i++){
		cin >> P;
		contadorA += P;
	}
	for (int i=0; i<N; i++){
		cin >> P;
		contadorB += P;
	}
  
	if (contadorA>21 && contadorB>21) {
    cout << "Empate." <<endl;
  } else if (contadorA > 21 && contadorB <= 21){
		if (contadorB==21)
			cout<<"Jogador B vence com BlackJack.";
		else
			cout<<"Jogador B vence com "<<contadorB<<" pontos.";
	} else if (contadorA<=21 && contadorB>21){
		if (contadorA==21)
			cout<<"Jogador A vence com BlackJack.";
		else
			cout<<"Jogador A vence com "<<contadorA<<" pontos.";
	} else if (contadorA<=21 && contadorB<=21){
		if (contadorB == contadorA) {
      cout<<"Empate.";
    } else if (contadorB>contadorA && contadorB==21) {
      cout<<"Jogador B vence com BlackJack.";
    } else if (contadorA>contadorB && contadorA==21) {
      cout<<"Jogador A vence com BlackJack.";
    } else if (contadorA > contadorB) {
      cout<<"Jogador A vence com "<<contadorA<<" pontos.";
    } else if (contadorA < contadorB) {
      cout<<"Jogador B vence com "<<contadorB<<" pontos.";
    }
	}
}