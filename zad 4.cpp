#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int a;
	int b;
	int c;
	
	cout << "Wpisz dlugosc odcinka a: " << endl;
	cin >> a;
	cout << "Wpisz dlugosc odcinka b:" << endl;
	cin >> b;
	cout << "Wpisz dlugosc odcinka c: " << endl;
	cin >> c;

	if (a == b && b == c) {
		cout << "Wszystkie odcinki sa rowne! ";
	}
	
	else if (a < b && a < c) {
		cout << "Najkrotszym odcinkiem jest odcinek a. ";
	}

	else if (b < a && b < c) {
		cout << "Najkrotszym odcinkiem jest odcinek b. ";
	}

	else if (c < a && c < b) {
		cout << "Najkrotszym odcinkiem jest odcinek c. ";
	}

	else {
		cout << "Nie przyszly mi do glowy takie mozliwosci :( ";
	}

	_getch();
	return 0;

	}