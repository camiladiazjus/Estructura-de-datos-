#include<iostream>
#include<string.h>
using namespace std;

class Cuenta {
  private:
   double tipoDeInteres;
   double saldo;
   string cuenta;
   string nombre;
  public:
    cuenta();
  virtual~Cuenta();
  void asignarNombre(string nom);
  string obtenerNombre();
  void asignarCuenta(string cue);
  string obtenerCuenta();
  void asignarTipoDeInteres();
  double obtenerTipoDeInteres();
  void reintegro(double cantidad);
  void ingreso(double cantidad);
  double estado();
};
