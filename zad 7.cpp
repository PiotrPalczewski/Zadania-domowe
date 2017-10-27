#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int a;
	int b;
	int a1;
	int b1;
	int nww;

	cout << "Wpisz pierwsza badana liczbe:" << endl;
	cin >> a;
	cout << "Wpisz druga badana liczbe:" << endl;
	cin >> b;

	if (a > 0 && b > 0) {
		a1 = a;
		b1 = b;
		while (a1 != b1) {
			while (a1 > b1) {
				b1=b1+b;
			}
			while (a1 < b1) {
				a1 = a1 + a;
			}
		
		continue;
		}
		while (a1 == b1) {
			cout << "Wspolna wielokrotnoscia jest "<< a1 << endl;
			break;
		}
	}
	_getch();
	return EXIT_SUCCESS;
}