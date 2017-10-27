#include <iostream>
#include <conio.h>

using namespace std;

int main(){
int n;
int i;
double Suma=0;

cout<< "Wpisz koncowa wartosc sumy:"<<endl;
cin >> n;

for (i=1; i<=n; i=i+1){
Suma = Suma + (i*i);
}

cout << "Suma wynosi:" << Suma <<endl;
_getch();

return 0;
}