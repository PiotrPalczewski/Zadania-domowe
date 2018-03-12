#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int Dziesietna;
	int Modulo=1;

	do {
		cout << "Podaj liczbe kotra chcesz przekonwertowac na system osemkowy: ";
		cin >> Dziesietna;
	} while (Dziesietna == 0);

	while (Modulo != 0) {

		Modulo = Dziesietna % 8;
		Dziesietna = Dziesietna / 8;
		cout << Modulo;
	}

	_getch();
}