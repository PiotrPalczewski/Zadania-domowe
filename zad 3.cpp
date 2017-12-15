#include <iostream>
#include <conio.h>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main() {
	int r;
	int alfastop;
	double alfarad;
	double F;
	
	cout << "Wpisz promien kola: " << endl;
	cin >> r;
	cout << "Wpisz kat (w stopniach!): " << endl;
	cin >> alfastop;

	alfarad = ((M_PI * alfastop) / 180);
	F = ((sqrt(r) / 2)*(alfarad - sin(alfarad)));

	cout << "Pole wycinka kola wynosi [j^2]: " << endl;
	cout << F;

	_getch();
	return 0;
}