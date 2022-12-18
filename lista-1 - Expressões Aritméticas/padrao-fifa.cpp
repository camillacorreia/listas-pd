#include <iostream>
#include<iomanip>

using namespace std;

int main() {
  int X,Y,Z,L,M,N;
  float B,C,D,E,F;
  
  cin>>X>>Y>>Z>>L>>M>>N;
  
  B = (Y*1.0/X*1.0);
  C= (Z*100.0/X);
  D= (L*100.0/X);
  E= (M*100.0/X);
  F= (N*100.0/X);
  
  cout<<"Partidas: "<<X<<endl;
  cout<<"Gols: "<< fixed<<setprecision(2)<<B<<endl;
  cout<<"Posse de Bola: "<<fixed<<setprecision(2)<<C<<"%"<<endl;
  cout<<"Vitórias: " <<fixed<<setprecision(2)<<D<<"%"<<endl;
  cout<<"Empates: "<<fixed<<setprecision(2)<<E<<"%"<<endl;
  cout<<"Derrotas: "<<fixed<<setprecision(2)<<F<<"%"<<endl;
}