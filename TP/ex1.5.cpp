/*
#include <iostream>;

using namespace std;

int main() {
	
	int horas_tempo1, minutos_tempo1, segundos_tempo1;
	int horas_tempo2, minutos_tempo2, segundos_tempo2;
	int total_dias, total_horas, total_minutos, total_segundos;
	int total_S;

	cout << "Tempo 1 (horas minutos segundos) ? ";
	cin >> horas_tempo1 >> minutos_tempo1 >> segundos_tempo1;

	cout << "Tempo 2 (horas minutos segundos) ? ";
	cin >> horas_tempo2 >> minutos_tempo2 >> segundos_tempo2;

	total_horas = horas_tempo1 + horas_tempo2;
	total_minutos = minutos_tempo1 + minutos_tempo2;
	total_segundos = segundos_tempo1 + segundos_tempo2;

	total_S =  total_horas * 3600 + total_minutos * 60 + total_segundos;

	int numero_dias, numero_horas, numero_minutos, numero_segundos;
	numero_dias = total_S / 86400;
	numero_horas = (total_S - (numero_dias*86400)) / 3600;
	numero_minutos = (total_S - (numero_dias*86400) - (numero_horas*3600)) / 60;
	numero_segundos = (total_S - (numero_dias * 86400) - (numero_horas * 3600) - (numero_minutos*60));

	cout << numero_dias << " dias, " << numero_horas << " horas, " << numero_minutos <<  " minutos, " << numero_segundos << " segundos";

	return 0;
}*/