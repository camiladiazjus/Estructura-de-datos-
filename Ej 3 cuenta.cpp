#include"Cuenta.h"

void Cuenta::asignarNombre(string nom){
  if(nom.length()==){
    cout<<"Error:cadena vacia"<<endl;
    return;
  }
  nombre=nom;
}
string Cuenta::obtenerNombre(){
  return nombre;
}
void Cuenta::ingreso(double cantidad){
  if(cantidad<0){
    cout<<"Error: cantidad negativa"<<endl;
    return;
  }
  saldo=saldo+cantidad
  }
void Cuenta::reintegro(double cantidad){
  if(saldo-cantidad)<0){
    cout<<"Error: no dispone de saldo"<<endl;
    return;
    saldo=saldo-cantidad;
  }
  double Cuenta::estado(){
    return saldo;
  }
