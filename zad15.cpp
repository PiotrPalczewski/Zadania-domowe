#include <iostream>
#include <conio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <cstdlib>

using namespace std;

double f1(double x) {
	return (sin(x)*cos(x) + (5 * x) + 1);
}

double f2(double x) {
	return (((M_PI)-pow(x, 2) + sin(x)) / sqrt(25 - x));
}

double f3(double x) {
	return (pow(M_E, (-1.5 * x)) - (0.3 * pow(x, 2)));
}

double bisekcja(double a, double b, double epsilon, int& i, int wybor) {

	double pierwiastek;

	switch (wybor) {
	case 1:
		while (abs(a - b) >= epsilon) {
			double c = ((a + b) / 2);
			if (f1(c) == 0) {
				pierwiastek = c;
			}
			else {
				if ((f1(a)*f1(c)) < 0) {
					b = c;
				}
				else {
					a = c;
				}
			}
			pierwiastek = c;
			i++;
		}
	case 2:
		while (abs(a - b) >= epsilon) {
			double c = ((a + b) / 2);
			if (f2(c) == 0) {
				pierwiastek = c;
			}
			else {
				if ((f2(a)*f2(c)) < 0) {
					b = c;
				}
				else {
					a = c;
				}
			}
			pierwiastek = c;
			i++;
		}
	case 3:
		while (abs(a - b) >= epsilon) {
			double c = ((a + b) / 2);
			if (f3(c) == 0) {
				pierwiastek = c;
			}
			else {
				if ((f3(a)*f3(c)) < 0) {
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
}

	int main() {
		int wybor;
		int potega;
		double epsilon;
		double pierwiastek;
		while (true) {
			cout << "MENU"
				<< endl << "Podaj numer aby przejsc do odpowiedniej sekcji:"
				<< endl << "1. Pierwiastek funkcji f1(x)=sin(x)cos(x)+5x+1"
				<< endl << "2. Pierwiastek funkcji f2(x) = (p-x*x+sin(x))/sqrt(25-x)"
				<< endl << "3. Pierwiastek funkcji f3(x) = exp(-1.5x) - 0.3x*x"
				<< endl << "4. Koniec" << endl;
			cin >> wybor;

			if (wybor != 4) {
				cout << "Podaj potege do ktorej rozszerzenia nalezy szukac pierwiastka: ";
				cin >> potega;
				epsilon = pow(10, (-1 * potega));
			}

			int i = 0;

			switch (wybor) {
			case 1:
				if (f1(-2) == 0) {
					pierwiastek = -2;
				}

				else if (f1(0) == 0) {
					pierwiastek = 0;
				}
				else {
					pierwiastek = bisekcja(-2, 0, epsilon, i, wybor);
				}
				cout << "Pierwiastek wynosi " << pierwiastek << endl;
				cout << "Liczba iteracji wynosi " << i << endl;
				break;
			case 2:
				if (f2(1.5) == 0) {
					pierwiastek = 1.5;
				}

				else if (f2(2.2) == 0) {
					pierwiastek = 2.2;
				}
				else {
					pierwiastek = bisekcja(1.5, 2.2, epsilon, i, wybor);
				}
				cout << "Pierwiastek wynosi " << pierwiastek << endl;
				cout << "Liczba iteracji wynosi " << i << endl;
				break;
			case 3:
				if (f3(0) == 0) {
					pierwiastek = 0;
				}

				else if (f3(1) == 0) {
					pierwiastek = 1;
				}
				else {
					pierwiastek = bisekcja(0, 1, epsilon, i, wybor);

				}
				cout << "Pierwiastek wynosi " << pierwiastek << endl;
				cout << "Liczba iteracji wynosi " << i << endl;
				break;
			case 4:
				break;
			}
			_getch();
			system("CLS");
		}
	}