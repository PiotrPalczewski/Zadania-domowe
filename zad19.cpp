#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>

using namespace std;

void dane(int A[8][10]){
	srand(time(NULL));
	for (int i = 0; i <= 7; i++) {
		for (int j = 0; j <= 9; j++) {
			A[i][j] = (rand()%10)+1;
		}
	}
}

void pisz_tab(int A[8][10]) {
	for (int i = 0; i <= 7; i++) {
		for (int j = 0; j <= 9; j++) {
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
}


void zamaina(int A[8][10]) {
	int z;
	int k=9;
	int l=9;
	
	while (k >= 8 && l >= 8) {
		cout << "Podaj indeksy wierszy ktore chcesz zamienic miejscami: "<<endl;
		cin >> k;
		cin >> l;
	}

	for (int i = 0; i <= 9; i++) {
		z = A[k][i];
		A[k][i] = A[l][i];
		A[l][i] = z;
	}
}

int main() {
	int A[8][10];

	dane(A);
	pisz_tab(A);
	cout << endl;
	zamaina(A);
	pisz_tab(A);
	_getch();
}