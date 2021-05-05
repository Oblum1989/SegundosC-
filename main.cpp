#include <iostream>
using namespace std;

int main() {
	int total_segundos, minutos, segundos, horas;
	cout << "ingrese los segundos:";
	cin >> total_segundos;
	horas = total_segundos / 3600;
	minutos = (total_segundos - horas * 3600) / 60;
	segundos = total_segundos - (horas * 3600 + minutos * 60);
	cout << horas << ":" << minutos << ":" << segundos << endl;
}