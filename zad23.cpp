#include <iostream>
#include <string>
#include <cstdlib>
#include <conio.h>

using namespace std;
const int n_max = 20;

struct uczen
{
	string imie, nazwisko;
	int polski, matematyka, fizyka, informatyka;
};

void czyt_dane(int &n, uczen dane[n_max]) {

		cout << "Podaj liczbe uczniow(nie wiecej niz 20): ";
		cin >> n;


	for (int i = 0; i<n; i++)
	{
		cout << "Podaj imie ucznia numer " << i + 1 << endl;
		cin >> dane[i].imie;
		cout << "Podaj nazwisko ucznia numer " << i + 1 << endl;
		cin >> dane[i].nazwisko;
		cout << "Podaj oceny z polskiego ucznia numer " << i + 1 << endl;
		cin >> dane[i].polski;
		cout << "Podaj oceny z matematyki ucznia numer " << i + 1 << endl;
		cin >> dane[i].matematyka;
		cout << "Podaj oceny z fizyki ucznia numer " << i + 1 << endl;
		cin >> dane[i].fizyka;
		cout << "Podaj oceny z informatyki ucznia numer " << i + 1 << endl;
		cin >> dane[i].informatyka;
	}

}

void pisz_dane(int n, uczen dane[n_max]) {

	for (int i = 0; i<n; i++)
	{
		cout << dane[i].imie << " " << dane [i].nazwisko << endl;
		cout << "Jezyk Polski: " << dane[i].polski << endl;
		cout << "Matematyka: " << dane[i].matematyka << endl;
		cout << "Fizyka: " << dane[i].fizyka << endl;
		cout << "Informatyka: " << dane[i].informatyka << endl<<endl;
	}
}

void sort_dane(int n, uczen dane[n_max]) {

	uczen zamianaMiejsc;

	for (int j = 0; j < n; j++) {

		for (int i = 0; i < n-1; i++) {

			if (dane[i].nazwisko > dane[i + 1].nazwisko) {
				zamianaMiejsc = dane[i];
				dane[i] = dane[i + 1];
				dane[i + 1] = zamianaMiejsc;
			}
		}
	}
}

void srednia(int n, uczen dane[n_max], float &srednia_min, float &srednia_max,
	int &i_min, int &i_max) {

	for (int i = 0; i < n; i++) {
		float sredniaOcen;
		int j = 0.;

		j = dane[i].polski + dane[i].matematyka + dane[i].fizyka + dane[i].informatyka;
		sredniaOcen = j / 4.;

		if (srednia_min > sredniaOcen) {
			srednia_min = sredniaOcen;
			i_min = i;
		}
		if (srednia_max < sredniaOcen) {
			srednia_max = sredniaOcen;
			i_max = i;
		}
	}

}

void pisz_srednia(int i_min, int i_max, uczen dane[n_max], float srednia_min,
	float srednia_max) {

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(3);

	cout << "Imie i nazwisko oraz srednia najslabszego uczenia: ";
	cout << dane[i_min].imie;
	cout << " " << dane[i_min].nazwisko;
	cout << ",  " << srednia_min << endl;

	cout << "Imie i nazwisko oraz srednia najlepszego uczenia: ";
	cout << dane[i_max].imie << " " << dane[i_max].nazwisko << ", " << srednia_max;
}

int main() {

	int n;
	float srednia_min = 7.;
	float srednia_max = 0.;
	int i_min;
	int i_max;
	uczen dane[20];
	
	czyt_dane(n, dane);
	sort_dane(n, dane);
	pisz_dane(n, dane); 
	srednia(n, dane, srednia_min, srednia_max, i_min, i_max);
	pisz_srednia(i_min, i_max, dane, srednia_min, srednia_max);

	_getch();

}