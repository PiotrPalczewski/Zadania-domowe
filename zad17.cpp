#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

void czyt_wyraz(char A[], int &n) {

	cout << "Podaj wyraz: "<<endl;
	cin >> A;

	n = strlen(A);
}

void sprawdz_wyraz(char A[], int n) {
	int i;
	int j;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		if (A[i] != A[j]) {
			break;
		}
	}
	if (i < j) {
		cout << "Podany wyraz nie jest palindromem" << endl;
	}
	else {
		cout << "Podany wyraz jest palindromem" << endl;
	}
}

int main() {
	char A[1024];
	int n = 1;
	while (true) {
		czyt_wyraz(A, n);
		sprawdz_wyraz(A, n);
		cout << endl;

	}
	_getch();
}