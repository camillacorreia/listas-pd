#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  int C, O, L, X;
  long qtd_pudim, tempo;

  cin >> C >> O >> L >> X;

  if((C/4) <= (O/8) && (C/4) <= (L/2) && (C/4) <= X){
    qtd_pudim = (C /4);
    cout << qtd_pudim << "aqui1" << endl;
  } else if((O/8) <= (C/4) && (O/8) <= (L/2) && (O/8) <= X){
    qtd_pudim = (O / 8);
    cout << qtd_pudim << "aqui2" << endl;
  } else if((L/2) <= (C/4) && (L/2) <= (O/8) && (L/2) <= X){
    qtd_pudim = (L / 2);  
    cout << qtd_pudim << "aqui3" << endl;
  } else if(X <= (C/4) && X <= (O/8) && X <= (L/2)){
    qtd_pudim = X;
    cout << qtd_pudim << "aqui4" << endl;
  }

  tempo = qtd_pudim * 1259;

  long horas = tempo / 3600;
  
  long resto_horas = tempo % 3600;
  long minutos = resto_horas / 60;
  
  long resto_minutos = resto_horas % 60;
  long segundos = resto_minutos % 60; 

  cout << horas << ' ' << 'h' << ' ' << minutos << ' ' << 'm' << ' ' << segundos << ' ' << 's';
}