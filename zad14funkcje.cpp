#include <iostream>
#include <conio.h>
#define _USE_MATH_DEFINES 
#include <math.h>

using namespace std;

double funkcja(double x) { // f(x)= e^(-1.5*x)-0.3*x^2
	return (pow(M_E, (-1.5 * x)) - (0.3 * pow(x, 2)));
}

double bisekcja(double a, double b, double epsilon, int& i) {

	double pierwiastek;

	while (abs(a - b) >= epsilon) {
		double c = ((a + b) / 2);
		if (funkcja(c) == 0) {
			pierwiastek = c;
		}
		else {
			if ((funkcja(a)*funkcja(c)) < 0) {
				b = c;
			}
			else {
				a = c;
			}
		}
		pierwiastek = c;
		i++;
	}
	return pierwiastek;
}

int main() {
	double a;
	double b;
	int potega;
	double pierwiastek;
	int i = 0;

	cout << "Podaj pierwsza liczbe badanego przedzia³u (podaj w formacie a.a): ";
	cin >> a;
	cout << "Podaj druga liczbe badanego przedzia³u (podaj w formacie b.b): ";
	cin >> b;
	cout << "Podaj potege do ktorej rozszerzenia nalezy szukac pierwiastka: ";
	cin >> potega;

	double epsilon = pow(10, (-1 * potega));

	if (funkcja(a) == 0) {
		pierwiastek = a;
	}

	if (funkcja(b) == 0) {
		pierwiastek = b;
	}

	else {
		pierwiastek = bisekcja(a, b, epsilon, i);
	}
	cout << "Pierwiastek wynosi " << pierwiastek << endl;
	cout << "Liczba iteracji wynosi " << i << endl;
	_getch();
}