#include <iostream>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "Turkish");

	int sayi1, sayi2, sayac = 0;

	cout << "Faktoriyeli giriniz: ";
	cin >> sayi1;

	cout << "Faktoriyelin içinde aranacak sayıyı giriniz: ";
	cin >> sayi2;

	for ( ; sayi1 >= 1; ){
		sayi1 = sayi1 / sayi2;
		sayac += sayi1;
	}

	cout << endl;

	cout << "Girilen faktoriyelin içinde " << sayac << " adet " << "'" << sayi2 << "' sayısı vardır." << endl;

	cout << endl;

	system("PAUSE");
	return 0;
}