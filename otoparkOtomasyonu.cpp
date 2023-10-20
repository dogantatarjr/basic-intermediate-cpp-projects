#include <iostream>
#include <string>
#include <conio.h>
#include <cmath>
#include <ctime>

#define MAX 100

using namespace std;

class Arac {
	public:
		string aracPlaka;
		string kisiAd, kisiSoyad, kisiTel;
		time_t giris;
}araba[MAX];

class Otopark {
	public:
		string gorevliAdi, gorevliSifre;
		int i, gelir;
		
		Otopark(string adi, string sifre){
			gorevliAdi = adi;
			gorevliSifre = sifre;
			gelir = 0;
			i = -1;
		}
		
		void menu(){
			int secim;
			
			cout << "- TATAR OTOPARK -" << endl << endl;
			cout << "1. Yeni Araç Giriþ" << endl;
			cout << "2. Araç Çýkýþ" << endl;
			cout << "3. Araçlarý Listele" << endl;
			cout << "4. Rapor" << endl;
			cout << "5. Çýkýþ" << endl;
			cout << "> ";
			cin >> secim;
			
			switch(secim){
				case 1:
					yeniAracGiris();
					break;
				case 2:
					aracCikis();
					break;
				case 3:
					aracListele();
					break;
				case 4:
					rapor();
					break;
				case 5:
					exit(0);
					break;
				default:
					cout << "Hatalý Seçim!!!" << endl;
					system("PAUSE");
					system("CLS");
					menu();
					break;
			}
		}
		
		void yeniAracGiris(){
			system("CLS");
			
			i++;
			
			cout << "Aracýn Sahibinin Adý             : ";
			cin >> araba[i].kisiAd;
			cout << "Aracýn Sahibinin Soyadý          : ";
			cin >> araba[i].kisiSoyad;
			cout << "Aracýn Sahibinin Telefon Numarasý: ";
			cin >> araba[i].kisiTel;
			cout << "Aracýn Plakasý                   : ";
			cin >> araba[i].aracPlaka;
			
			cout << "Ýþlem Baþarýlý!" << endl;
			
			time_t($araba[i].giris);
			
			system("PAUSE");
			system("CLS");
			menu();	
		}		
		
		void aracCikis(){
			system("CLS");
			
			bool buldu = false;
			int j = 0, k, saat;
			double sure;
			time_t cikis;
			string plaka;
			time_t($cikis);
			
			cout << "Araç Plakasýný Girin: ";
			cin >> plaka;
			
			while(j <= 1){
				if(araba[j].aracPlaka == plaka){
					sure = difftime(cikis, araba[j].giris);
					
					for(k = j; k <= i; k++){
						araba[k] = araba[k + 1];
					}
					
					i--;
					
					buldu = true;
					break;
				}
				
				j++;
			}
			
			if(buldu == true){
				cout << "Plaka Bulunamadý!!!" << endl;
				
				system("PAUSE");
				system("CLS");
				menu();
			}
			
			sure = sure / 3600;
			saat = ceil(sure);
			
			cout << "Ücret: " << saat * 5 << "TL" << endl;
			
			gelir += saat * 5;
			
			system("PAUSE");
			system("CLS");
			menu();
		}
		
		void aracListele(){
			system("CLS");
			
			for(int j = 0; j <= i; j++){
				cout << araba[j].aracPlaka << endl;
			}
			
			system("PAUSE");
			system("CLS");
			menu();
		}
		
		void rapor(){
			system("CLS");
			
			cout << "Anlýk Gelir: " << gelir << "TL" << endl;
			
			system("PAUSE");
			system("CLS");
			menu();
		}
};

int main() {
    setlocale(LC_ALL, "Turkish");

	Otopark calisan("dogantatarjr", "dogan2008");
	
	string ad, sifre;
	int i = 0;
	
	cout << "- TATAR OTOPARK -" << endl;
	
	while(1){
		cout << "Kullanýcý Adý Girin: ";
		cin >> ad;
		cout << "Þifre Girin        : ";
		cin >> sifre;
		
		if(calisan.gorevliAdi == ad && calisan.gorevliSifre == sifre){
			cout << "Giriþ Baþarýlý!" << endl;
			
			system("PAUSE");
			break;
		} else {
			cout << "Tekrar Deneyin!!!" << endl;
			
			system("PAUSE");
			system("CLS");
		}
	}
	
	system("CLS");
	calisan.menu();

    system("PAUSE");
    return 0;
}
