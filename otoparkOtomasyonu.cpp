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
			cout << "1. Yeni Ara� Giri�" << endl;
			cout << "2. Ara� ��k��" << endl;
			cout << "3. Ara�lar� Listele" << endl;
			cout << "4. Rapor" << endl;
			cout << "5. ��k��" << endl;
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
					cout << "Hatal� Se�im!!!" << endl;
					system("PAUSE");
					system("CLS");
					menu();
					break;
			}
		}
		
		void yeniAracGiris(){
			system("CLS");
			
			i++;
			
			cout << "Arac�n Sahibinin Ad�             : ";
			cin >> araba[i].kisiAd;
			cout << "Arac�n Sahibinin Soyad�          : ";
			cin >> araba[i].kisiSoyad;
			cout << "Arac�n Sahibinin Telefon Numaras�: ";
			cin >> araba[i].kisiTel;
			cout << "Arac�n Plakas�                   : ";
			cin >> araba[i].aracPlaka;
			
			cout << "��lem Ba�ar�l�!" << endl;
			
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
			
			cout << "Ara� Plakas�n� Girin: ";
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
				cout << "Plaka Bulunamad�!!!" << endl;
				
				system("PAUSE");
				system("CLS");
				menu();
			}
			
			sure = sure / 3600;
			saat = ceil(sure);
			
			cout << "�cret: " << saat * 5 << "TL" << endl;
			
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
			
			cout << "Anl�k Gelir: " << gelir << "TL" << endl;
			
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
		cout << "Kullan�c� Ad� Girin: ";
		cin >> ad;
		cout << "�ifre Girin        : ";
		cin >> sifre;
		
		if(calisan.gorevliAdi == ad && calisan.gorevliSifre == sifre){
			cout << "Giri� Ba�ar�l�!" << endl;
			
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
