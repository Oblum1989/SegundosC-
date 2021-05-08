#include <iostream>
using namespace std;

int main() {
	float puntaje1, puntaje2, promedio;
  string nombre;
	cout << "ingrese el nombre:";
	cin >> nombre;
  cout << "ingrese puntaje entre 0.00 y 10.0"<< endl;
  cin >> puntaje1;
  cout << "ingrese puntaje entre 0.00 y 10.0"<< endl;
  cin >> puntaje2;
  promedio = (puntaje1 + puntaje2) / 2;

  if ( promedio >= 9)
    cout << nombre << " Sobresaliente" << endl;
  else if ( promedio >= 7 && promedio <= 8.99)
    cout << nombre << " Aceptable" << endl;
  else
    cout << nombre << " Perdida" << endl;
	
}