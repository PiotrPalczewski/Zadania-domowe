#include <iostream>
#include <conio.h>

using namespace std;

bool liczbaPierwsza(int x) {
	if (x < 2) {
		return false;
	}

	else {
		for (int i = 2; i*i <= x; i++) {
			if (x%i == 0) {
				return false;
			}
		}
	}
	return true;
}

int main() {
	while (true) {
		int n;

		cout << "Podaj liczbe: ";
		cin >> n;

		if (liczbaPierwsza(n)) {
			cout << "Liczba " << n << " jest pierwsza" << endl;
		}
		else {
			cout << "Liczba " << n << " nie jest pierwsza" << endl;
		}

		_getch();
	}
}
