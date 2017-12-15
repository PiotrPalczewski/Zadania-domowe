#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;
	double x;
	double y;
	double W;
	double Wy;
	double Wx;

	cout << "Wpisz zmienna a:" << endl;
	cin >> a;
	cout << "Wpisz zmienna b:" << endl;
	cin >> b;
	cout << "Wpisz zmienna c:" << endl;
	cin >> c;
	cout << "Wpisz zmienna d:" << endl;
	cin >> d;
	cout << "Wpisz zmienna e:" << endl;
	cin >> e;
	cout << "Wpisz zmienna f:" << endl;
	cin >> f;

	W = ((a*d) - (b*c));
	Wx = ((e*d) - (b*f));
	Wy = ((a*e) - (b*f));
	x = (Wx / W);
	y = (Wy / W);

	if (W == 0 && (Wx != 0 || Wy != 0)) {
		cout << "Dzialanie nieobliczalne! Wyznacznik glowny nie moze rownac sie 0 ";
	}

	else if (W == 0 && (Wx == 0 && Wy == 0)) {
		cout << "Dzialanie sprzeczne!";
	}
	else {
		cout << "Rozwiazanie ukladu rownan: " << endl;
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(3);
		cout << "x = ";
		cout.width(8); 
		cout << x << endl;
		cout << "y = ";
		cout.width(8);
		cout << y;
	}
	
	_getch();
	return 0;
}