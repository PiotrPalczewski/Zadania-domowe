#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(){

	int n;
	int p;
	double p1;

while(true){
	double Suma = 0;
	cout<<"Wpisz liczbe n: "<<endl;
	cin>>n;

	p = pow(n,(1./2));

	while (p>1){
		if (n%p==0){
			Suma=Suma + p;
			p1=n/p;
			if (p1!=p){
				Suma = Suma + p1;
				p = p - 1;
			}
			else{
				p = p - 1;
			}
		}
		else{
			p = p - 1;
		}
	}
	if (!(p>1)){
		Suma=Suma+1;
		if (Suma==n){
			cout<< n <<" jest liczba doskonala!"<<endl;
		}
		else{
			cout<<n<<" nie jest liczba doskonala!"<<endl;
		}
	}
	_getch();
	system("cls");
}
}