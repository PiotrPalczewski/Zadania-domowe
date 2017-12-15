#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

int main() {
	int a;
	int b;
	int r;
	double delta;
	double x10;
	double y10;
	double x11;
	double y11;
	double x12;
	double y12;

	cout << "Wpisz zmienna a:" << endl;
	cin >> a;
	cout << "Wpisz zmienna b: " << endl;
	cin >> b;
	cout << "Wpisz promien kola: " << endl;
	cin >> r;

	delta = ((4 * a*a*b*b) - (4 * (1 + (a*a))*((b*b) - (r*r))));
	x10 = (((-2) * a*b) / (2 * (1 + a)*(1 + a)));
	y10 = ((a*x10) + b);
	x11 = ((((-2) * a*b) - (sqrt(4 * a*a*b*b) - (4 * (1 + (a*a))*((b*b) - (r*r))))) / (2 * (1 + a)*(1 + a)));
	y11 = ((a*x11) + b);
	x12 = ((((-2) * a*b) + (sqrt(4 * a*a*b*b) - (4 * (1 + (a*a))*((b*b) - (r*r))))) / (2 * (1 + a)*(1 + a)));
	y12 = ((a*x12) + b);

	if (a == 0) {
		cout << "Dzialanie niewykonalne! Zmienna a nie moze wynosic 0! " << endl;
	}

	else if (delta < 0) {
		cout << "Prosta nie ma punktów wspolnych z okregiem! " << endl;
	}

	else if (delta == 0) {
		cout << "Prosta jest styczna do okregu. Punkt przeciecia:" << endl;
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(2);
		cout << "x = ";
		cout.width(7);
		cout << x10 << endl;
		cout << "y = ";
		cout.width(7);
		cout << y10;
	}

	else {
		cout << "Prosta przecina okrag w dwoch punktach:" << endl;
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(2);
		cout << "x1 = ";
		cout.width(7);
		cout << x11 << "	";
		cout << "y1 = ";
		cout.width(7);
		cout << y11 << endl;
		cout.precision(2);
		cout << "x2 = ";
		cout.width(7);
		cout << x12 << "	";
		cout << "y2 = ";
		cout.width(7);
		cout << y12;
	}
	_getch();
	return 0;
}