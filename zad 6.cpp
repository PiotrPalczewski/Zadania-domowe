#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int x = 0;

	cout << "Wprowadz liczbe ktorej dzielniki zostana wypisane: ";
	cin >> x;
	
	for (int i = 1; i <= x; i++){
		if (x % i == 0) cout << i << " ";
	}

	_getch();
}