#include <iostream>
#include <conio.h>
#define _USE_MATH_DEFINES 
#include <math.h>
using namespace std;

int main() {
	double a;
	double b;
	double c;
	int potega;
	double funkcjaA;
	double funkcjaB;
	double funkcjaC; // f(x)= e^(-1.5*x)-0.3*x^2
	double pierwiastek;
	int i = 0;
	
	cout << "Podaj pierwsza liczbe badanego przedzia³u (podaj w formacie a.a): " << endl;
	cin >> a;
	cout << "Podaj druga liczbe badanego przedzia³u (podaj w formacie b.b): " << endl;
	cin >> b;
	cout << "Podaj potege do ktorej rozszerzenia nalezy szukac pierwiastka: " << endl;
	cin >> potega;

	double epsilon = pow(10, (-1 * potega));

	if ((pow(M_E, (-1.5 * a)) - (0.3 * pow(a, 2))) == 0) {
		pierwiastek = a;
	}

	if ((pow(M_E, (-1.5 * b)) - (0.3 * pow(b, 2))) == 0) {
		pierwiastek = b;
	}

	else {
		while (abs(a - b) >= epsilon) {
			c = ((a + b) / 2);
			if ((pow(M_E, (-1.5 * c)) - (0.3 * pow(c, 2))) == 0) {
				pierwiastek = c;
			}
			else {
				funkcjaA = (pow(M_E, (-1.5 * a)) - (0.3 * pow(a, 2)));
				funkcjaB = (pow(M_E, (-1.5 * b)) - (0.3 * pow(b, 2)));
				funkcjaC = (pow(M_E, (-1.5 * c)) - (0.3 * pow(c, 2)));

					if ((funkcjaA*funkcjaC) < 0) {
						b = c;
					}
					else {
						a = c;
					}
				}		
			pierwiastek = c;
			i++;
		}
		
	}
	cout << "Pierwiastek wynosi " << pierwiastek << endl;
	cout << "Liczba iteracji wynosi " << i << endl;
	_getch();
}