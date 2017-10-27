#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int a;
	int b;
	int a1;
	int b1;

	cout << "Wpisz pierwsza liczbe" << endl;
	cin >> a;
	cout << "Wpisz druga liczbe" << endl;
	cin >> b;

	while (a > 0 && b > 0) {
		a1 = a;
		b1 = b;
		while (a1 != b1) {
			if (a1 > b1) {
				a1 = a1 - b1;
			}
			else {
				b1 = b1 - a1;
			}
		
		}
		if (a1 == b1) {
			cout << "Najwiekszym wspolnym dzielnikiem jest " << a1 << endl;
			break;
		}
	}

	if (a <=0 && b<=0) {
		cout << "Brak rozwiazan!" << endl;
	}

	_getch();
	return EXIT_SUCCESS;

}