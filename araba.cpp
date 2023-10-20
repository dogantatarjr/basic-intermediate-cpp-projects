#include <iostream>
#include <string>
using namespace std;

class Araba {
	string marka, model, vites, renk, tavan;
	float fiyat;

	public:
		void arabalar(string mar, string mod, string v, string r, string t, float f) {
			marka = mar;
			model = mod;
			vites = v;
			renk = r;
			tavan = t;
			fiyat = f;
		};

		void goruntule() {
			cout << "---------------------------" << endl;
			cout << "Arabanızın Markası: " << marka << endl;
			cout << "Arabanızın Modeli : " << model << endl;
			cout << "Arabanızın Vitesi : " << vites << endl;
			cout << "Arabanızın Rengi  : " << renk << endl;
			cout << "Arabanızın Tavanı : " << tavan << endl;
			cout << "Arabanızın Fiyatı : " << fiyat << endl;
			cout << "---------------------------" << endl;
		};
};

int main() {
	setlocale(LC_ALL, "Turkish");

	Araba araba;

	string marka, model, vites, renk, tavan;
	string renk_, tavan_;
	float fiyat = 40000;

	cout << "Marka: ";
	cin >> marka;

	cout << "Model: ";
	cin >> model;

	cout << "Vites: ";
	cin >> vites;

	cout << "Rengini değiştirmek ister misiniz (Evet,Hayır): ";
	cin >> renk_;

	if (renk_ == "Evet") {
		cout << "Renk: ";
		cin >> renk;
		fiyat += 1000;

		cout << "Tavanı değiştirmek ister misiniz (Evet,Hayır): ";
		cin >> tavan_;

		if (tavan_ == "Evet") {
			cout << "Tavan: ";
			cin >> tavan;
			fiyat += 5000;
		} else  {
			tavan = "Normal";
		}
	} else {
		renk = "Beyaz";

		cout << "Tavanı değiştirmek ister misiniz (Evet,Hayır): ";
		cin >> tavan_;

		if (tavan_ == "Evet") {
			cout << "Tavan: ";
			cin >> tavan;
			fiyat += 5000;
		} else {
			tavan = "Normal";
		}
	}

	araba.arabalar(marka, model, vites, renk, tavan, fiyat);

	araba.goruntule();

	system("PAUSE");
	return 0;
}