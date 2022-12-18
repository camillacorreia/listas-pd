#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  int A, D, P, soma, per;
  cin >> A >> D >> P;
  soma = A + D + P;
  
  if(soma > 110) {
    cout << "Hum, parece que houve um erro" << endl;
  } else {
    per = (soma*100)/110;

    if(per <=50){
      cout << "Seu pokemon nao fara progresso em batalhas" << endl;
    } else {
      if(per >=51 && per <=66) {
        cout << "Seu pokemon esta acima da media" << endl;
      } else {
        if(per >=67 && per <=79) {
          cout << "Seu pokemon certamente me chamou atencao" << endl;
        } else {
          cout << "Seu pokemon e uma maravilha" << endl;
        }
      }
    }
  }
}