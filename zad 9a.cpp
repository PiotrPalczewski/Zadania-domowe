#include <iostream>
#include <conio.h>
#include <math.h>
#include <algorithm>
#include <cstdlib>
#include <Windows.h>

using namespace std;

int main() {

	while (TRUE) {
		int p;
		int q;
		int punkty;

		cout << "Wpisz pierwsza liczbe:" << endl;
		cin >> p;
		cout << "Wpisz druga liczbe:" << endl;
		cin >> q;

		if (p == 2 || p == 4 || p == 6) {
			if (q == 2 || q == 4 || q == 5) {
				punkty = p + (3 * q);
				cout << "Wygrana wynosi " << punkty << " punktow!" << endl;
			}
			else if (q == 1 || q == 3 || q == 6) {
				punkty = 2 * q;
				cout << "Wygrana wynosi " << punkty << " punktow!" << endl;
			}
		}
		else if (p == 1 || p == 3 || p == 5) {
			if (p == 5 && q == 5) {
				cout << "Wygrana wynosi 14 punktow!" << endl;
			}
			else if (q == 2 || q == 4 || q == 5) {
				punkty = min(p, q) + 4;
				cout << "Wygrana wynosi " << punkty << " punktow!" << endl;
			}
			else if (q == 1 || q == 3 || q == 6) {
				if (p == q) {
					punkty = (5 * p) + 3;
					cout << "Wygrana wynosi " << punkty << " punktow!" << endl;
				}
				else {
					punkty = (2 * q) + p;
					cout << "Wygrana wynosi " << punkty << " punktow!" << endl;
				}
			}
		}
		else {
			cout << "Pamietaj ze korzysta sie z k6 - dozwolone sa liczby z przedzialu od 1 do 6!" << endl;
		}

		cout << endl << "Kliknij cokolwiek zeby sprobowac jeszcze raz!" << endl;
		_getch();
		system("cls");
	}
	return EXIT_SUCCESS;
}