#include <iostream>
#include <conio.h>
#include <algorithm>

using namespace std;

int main() {
	int n;
	int k;
	int m;
	double silniaN;
	double silniaK;
	double silniaNK;

	cout << "Podaj iloœæ elementow calego zbioru: ";
	cin >> n;
	cout << "Podaj iloœæ elementow w podzbiorze: ";
	cin >> k;

	for (int i = n; i > 1; i--) {
		silniaN *= i;
		silniaK *= i;
		silniaNK *= i;
	}

	m = (silniaN / silniaK*silniaNK);

	cout << "Ilosc podzbiorow" << k << " elementowych mozliwych do utworzenia ze zbioru " << n << " elementowego wynosi: " << m << endl;
	_getch();
}
