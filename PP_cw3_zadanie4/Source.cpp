#include<iostream>

using namespace std;

double liczPodatek(double dochod) {
	if (dochod > 74048.0) {
		cout << "\nObliczam  dla  progu podatkowego powyzej 74048\n";
		return (dochod - 74048.0) * 40 / 100 + 17648.44;

	}
	else if (dochod > 37024.0) {
		cout << "\nObliczam  dla  progu podatkowego powyzej 37024\n";
		return (dochod - 37024.0) * 30 / 100 + 6541.24;
	}
	else {
		cout << "\nObliczam  dla  progu podatkowego ponizej 37024\n";
		return dochod * 30 / 100 - 493.32;

	}
}

int main() {
	double dochod, wynik;
	cout << "Oblicz wysokosc podatku dla podanego dochodu\n";
	cout << "\tPodaj dochod: ";
	cin >> dochod;
	wynik = liczPodatek(dochod);
	cout << "\nPodatek wynosi: " << wynik;
}