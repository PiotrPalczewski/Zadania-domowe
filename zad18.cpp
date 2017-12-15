#include <iostream>
#include <conio.h>

using namespace std;

void czytaj_dane(int &n, int X[], int Y[]) {
	n = 11;
	while (n > 10 && n < 1) {
		cout << "Podaj rozmiat tablicy (maksymalnie 10 elemntowa): ";
		cin >> n;
	}
	cout << "Podaj elemnty wektora X: "<<endl;
	for (int i = 0; i < n; i++) {
		cin >> X[i];
	}

	cout << "Podaj elementy wektora Y: "<<endl;
	for (int i = 0; i < n; i++) {
		cin >> Y[i];
	}
}

int iloczyn_skalarny(int n, int X[], int Y[]) {
	int x=0;

	for (int i = 0; i <= (n - 1); i++) {
		x += X[i] * Y[i];
	}
	return x;
}


int main() {
	int X[10];
	int Y[10];
	int n;
	int y;

	czytaj_dane(n, X, Y);

	y = iloczyn_skalarny(n, X, Y);
	cout << "Iloczyn skalarny wektorow wynosi: ";
	cout << y;
	_getch();
}