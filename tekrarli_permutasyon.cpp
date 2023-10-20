#include <iostream>
#include <string>
using namespace std;

int faktoriyel(int);
int hesapla(int,int);

int faktoriyel(int n) {
	int i, fakt = 1;

	for (i = n; i > 0; i--) {
		fakt = fakt * i;
	}

	return fakt;
}

int hesapla(int e, int b) {
	return faktoriyel(e + b) / (faktoriyel(e) * faktoriyel(b));
}

int main() {
	setlocale(LC_ALL, "Turkish");

	int en, boy;

	cout << "En giriniz: ";
	cin >> en;

	cout << "Boy giriniz: ";
	cin >> boy;

	cout << endl;

	for (int i = 0; i < 1; i++) {
		for (int j = 0; j < en; j++){
			if (j == en - 1) {
				cout << "B";
				break;
			}
			cout << "+ ";
		}
		cout << endl;
	}

	for (int i = 0; i < boy - 2; i++) {
		for (int j = 0; j < en; j++) {
			cout << "+ ";
		}
		cout << endl;
	}

	for (int i = 0; i < 1; i++) {
		for (int j = 0; j < en; j++) {
			if (j == 0) {
				cout << "A ";
				continue;
			}
			cout << "+ ";
		}
		cout << endl;
	}

	cout << endl;

	cout << "A noktasından B noktasına en kısa yoldan gidilebilecek olasılık sayısı: " << hesapla(en,boy) << endl;

	system("PAUSE");
	return 0;
}