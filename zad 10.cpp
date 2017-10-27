#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;

int main() {
	char kategoria;
	int godziny;
	int zarobek;
	int zarobekN;
	while (true) {
		cout << "Wbierz kategorie zarobkowa pracownika A(15zl/h), B(25zl/h), C(30zl/h), D(35zl/h). " << endl;
		cin >> kategoria;
		cout << "Wpisz liczbe godzin przepracowanych przez pracownika" << endl;
		cin >> godziny;

		if (godziny <= 40) {
			switch (kategoria) {
			case ('A'):
				zarobek = godziny * 15;
				if (zarobek <= 700) {
					zarobekN = zarobek - (zarobek * (0.15));
					cout << "Zarobek brutto " << zarobekN << endl;
					cout << "Zarobek netto " << zarobek << endl;
				}
				else if (zarobek <= 1200) {
					zarobekN = zarobek - (zarobek *(0.2));
					cout << "Zarobek brutto " << zarobekN << endl;
					cout << "Zarobek netto " << zarobek << endl;
				}
				else {
					zarobekN = zarobek - (zarobek* (0.25));
					cout << "Zarobek brutto " << zarobekN << endl;
					cout << "Zarobek netto " << zarobek << endl;
				}
				break;
			case ('B'):
				zarobek = godziny * 25;
				if (zarobek <= 700) {
					zarobekN = zarobek - (zarobek * (0.15));
					cout << "Zarobek brutto " << zarobekN << endl;
					cout << "Zarobek netto " << zarobek << endl;
				}
				else if (zarobek <= 1200) {
					zarobekN = zarobek - (zarobek *(0.2));
					cout << "Zarobek brutto " << zarobekN << endl;
					cout << "Zarobek netto " << zarobek << endl;
				}
				else {
					zarobekN = zarobek - (zarobek* (0.25));
					cout << "Zarobek brutto " << zarobekN << endl;
					cout << "Zarobek netto " << zarobek << endl;
				}
				break;
			case ('C'):
				zarobek = godziny * 30;
				if (zarobek <= 700) {
					zarobekN = zarobek - (zarobek * (0.15));
					cout << "Zarobek brutto " << zarobekN << endl;
					cout << "Zarobek netto " << zarobek << endl;
				}
				else if (zarobek <= 1200) {
					zarobekN = zarobek - (zarobek *(0.2));
					cout << "Zarobek brutto " << zarobekN << endl;
					cout << "Zarobek netto " << zarobek << endl;
				}
				else {
					zarobekN = zarobek - (zarobek* (0.25));
					cout << "Zarobek brutto " << zarobekN << endl;
					cout << "Zarobek netto " << zarobek << endl;
				}
				break;
			case ('D'):
				zarobek = godziny * 35;
				if (zarobek <= 700) {
					zarobekN = zarobek - (zarobek * (0.15));
					cout << "Zarobek brutto " << zarobekN << endl;
					cout << "Zarobek netto " << zarobek << endl;
				}
				else if (zarobek <= 1200) {
					zarobekN = zarobek - (zarobek *(0.2));
					cout << "Zarobek brutto " << zarobekN << endl;
					cout << "Zarobek netto " << zarobek << endl;
				}
				else {
					zarobekN = zarobek - (zarobek* (0.25));
					cout << "Zarobek brutto " << zarobekN << endl;
					cout << "Zarobek netto " << zarobek << endl;
				}
				break;
			default:
				cout << "Wybierz odpowiednia kategorie wynagrodzenia!" << endl;
				break;

			}
		}
		else {
			switch (kategoria) {
			case ('A'):
				zarobek = ((godziny - 40) * 30) + (40 * 15);
				if (zarobek <= 700) {
					zarobekN = zarobek - (zarobek * (0.15));
					cout << "Zarobek brutto " << zarobekN << endl;
					cout << "Zarobek netto " << zarobek << endl;
				}
				else if (zarobek <= 1200) {
					zarobekN = zarobek - (zarobek *(0.2));
					cout << "Zarobek brutto " << zarobekN << endl;
					cout << "Zarobek netto " << zarobek << endl;
				}
				else {
					zarobekN = zarobek - (zarobek* (0.25));
					cout << "Zarobek brutto " << zarobekN << endl;
					cout << "Zarobek netto " << zarobek << endl;
				}
				break;
			case ('B'):
				zarobek = ((godziny - 40) * 50) + (40 * 25);
				if (zarobek <= 700) {
					zarobekN = zarobek - (zarobek * (0.15));
					cout << "Zarobek brutto " << zarobekN << endl;
					cout << "Zarobek netto " << zarobek << endl;
				}
				else if (zarobek <= 1200) {
					zarobekN = zarobek - (zarobek *(0.2));
					cout << "Zarobek brutto " << zarobekN << endl;
					cout << "Zarobek netto " << zarobek << endl;
				}
				else {
					zarobekN = zarobek - (zarobek* (0.25));
					cout << "Zarobek brutto " << zarobekN << endl;
					cout << "Zarobek netto " << zarobek << endl;
				}
				break;
			case ('C'):
				zarobek = ((godziny - 40) * 60) + (40 * 30);
				if (zarobek <= 700) {
					zarobekN = zarobek - (zarobek * (0.15));
					cout << "Zarobek brutto " << zarobekN << endl;
					cout << "Zarobek netto " << zarobek << endl;
				}
				else if (zarobek <= 1200) {
					zarobekN = zarobek - (zarobek *(0.2));
					cout << "Zarobek brutto " << zarobekN << endl;
					cout << "Zarobek netto " << zarobek << endl;
				}
				else {
					zarobekN = zarobek - (zarobek* (0.25));
					cout << "Zarobek brutto " << zarobekN << endl;
					cout << "Zarobek netto " << zarobek << endl;
				}
				break;
			case ('D'):
				zarobek = ((godziny - 40) * 70) + (40 * 35);
				if (zarobek <= 700) {
					zarobekN = zarobek - (zarobek * (0.15));
					cout << "Zarobek brutto " << zarobekN << endl;
					cout << "Zarobek netto " << zarobek << endl;
				}
				else if (zarobek <= 1200) {
					zarobekN = zarobek - (zarobek *(0.2));
					cout << "Zarobek brutto " << zarobekN << endl;
					cout << "Zarobek netto " << zarobek << endl;
				}
				else {
					zarobekN = zarobek - (zarobek* (0.25));
					cout << "Zarobek brutto " << zarobekN << endl;
					cout << "Zarobek netto " << zarobek << endl;
				}
				break;
			default:
				cout << "Wybierz odpowiednia kategorie wynagrodzenia!" << endl;
				break;
			}
		}
		cout << "Kliknij dowolony przycisk aby kontnuowac" << endl;
		_getch();
		system("cls");
	}
	}