#include <iostream>
#include <string>

#define MAX 150
#define MAX2 15
#define MAX3 10

using namespace std;

void gorevliMenu();
void anaMenu();

class Ogrenci {
	public:
		string ad, soyad;
		int numara, vize, final;
		double ortalama;
		
		Ogrenci(){};
		void yeniOgrenciKayit(string, string, int);
}ogrenci[MAX], ogrenci1[MAX3];

void Ogrenci :: yeniOgrenciKayit(string a, string s, int n){
	ad = a;
	soyad = s;
	numara = n;
}

class Ogretmen {
	public:
		string ogretmenAd, ogretmenSoyad, sifre;
		string ders;
		int ogretmenNo;
		
		void yeniOgretmenKayit(int, string, string, string, string);
		void ogretmenMenu();
}ogretmen[MAX2];

void Ogretmen :: yeniOgretmenKayit(int n, string a, string s, string d, string pass){
	ogretmenNo = n;
	ogretmenAd = a;
	ogretmenSoyad = s;
	ders = d;
	sifre = pass;
}

void Ogretmen :: ogretmenMenu(){
	int secim, n;
	static double toplam;
	static int d = -1;
	
	system("CLS");
	
	cout << "- ��retmen Not Sistemi -" << endl;
	cout << endl;
	cout << "1. ��renci Not Giri�i" << endl;
	cout << "2. S�n�f Not Ortalamas�" << endl;
	cout << "3. ��renci Listesi" << endl;
	cout << "4. Ana Men�" << endl;
	cout << "> ";
	cin >> secim;
	
	switch(secim){
		case 1:
			system("CLS");
			
			cout << "Notu girilecek ��rencinin numaras�n� giriniz: ";
			cin >> n;
			
			for(int c = 0; c < 150; c++){
				if(ogrenci[c].numara == n){
					system("CLS");
					
					cout << "Vize Notunu Giriniz: ";
					cin >> ogrenci[c].vize;
					
					cout << "Final Notunu Giriniz: ";
					cin >> ogrenci[c].final;
					
					cout << "��lem Ba�ar�l�!" << endl;
					
					d++;
					
					ogrenci[c].ortalama = double(ogrenci[c].vize * 0.3 + ogrenci[c].final * 0.7);
					
					ogrenci1[d] = ogrenci[c];
					
					system("PAUSE");
					ogretmenMenu();
				} else {
					cout << "��renci Bulunamad�!!!" << endl;
					
					system("PAUSE");
					ogretmenMenu();
				}
			}
		case 2:
			system("CLS");
			
			cout << "S�n�f�n Not Ortalamas�: ";
			
			if(d < 0){
				cout << "Bu dersi alan ��renci bulunmamakta!" << endl;
				
				system("PAUSE");
				ogretmenMenu();
			} else {
				for(int x = 0; x <= d; x++){
					toplam += ogrenci1[x].ortalama;
					
					cout << toplam / (d + 1) << endl;
					
					system("PAUSE");
					ogretmenMenu();
				}
			}
		case 3:
			system("CLS");
			
			for(int x = 0; x <= d; x++){
				for(int y = 0; y <= d; y++){
					if(ogrenci1[x].numara == ogrenci[y].numara){
						cout << "Ad      : " << ogrenci1[x].ad << endl;
						cout << "Soyad   : " << ogrenci1[x].soyad << endl;
						cout << "Numara  : " << ogrenci1[x].numara << endl;
						cout << "Ortalama: " << ogrenci1[x].ortalama << endl;
						cout << endl;
					}
				}
			}
			
			system("PAUSE");
			ogretmenMenu();
	}
}

int main() {
    setlocale(LC_ALL, "Turkish");

	anaMenu();

    system("PAUSE");
    return 0;
}

void anaMenu(){
	system("CLS");
	
	int secim, b, number;
	string sifre;
	string kullaniciID, kullaniciSifre;
	
	cout << "- Okul Otomasyonu -" << endl;
	cout << endl;
	cout << "1. G�revli Giri�i" << endl;
	cout << "2. ��retmen Giri�i" << endl;
	cout << "3. ��k��" << endl;
	cout << "> ";
	cin >> secim;
	
	switch(secim){
		case 1:
			system("CLS");
			
			cout << "Kullan�c� ID: ";
			cin >> kullaniciID;
			
			if(kullaniciID == "1"){
				cout << "�ifre: ";
				cin >> kullaniciSifre;
				
				if(kullaniciSifre == "1"){
					gorevliMenu();
				} else {
					cout << "�ifre Yanl��!!!" << endl;
					system("PAUSE");
					anaMenu();
				}
			} else {
				cout << "Hatal� Giri�!!!" << endl;
				system("PAUSE");
				anaMenu();
			}
		case 2:
			system("CLS");
			
			cout << "Numara Girin: ";
			cin >> number;
			
			for(b = 0; b < 15; b++){
				if(ogretmen[b].ogretmenNo == number){
					cout << "�ifre Do�ru!" << endl;
					
					system("PAUSE");
					ogretmen[b].ogretmenMenu();
				} else {
					cout << "�ifre Yanl��!" << endl;
					
					system("PAUSE");
					anaMenu();
				}
			}
		case 3: 
			exit(0);
		default:
			anaMenu();
	}
}

void gorevliMenu(){
	int secim, no, aranan;
	static int numara = 0, i = -1, a = -1;
	string ad, soyad, ders, sifre;
	
	system("CLS");
	
	cout << "- Okul Otomasyonu -" << endl;
	cout << endl;
	cout << "1. Yeni ��renci Kay�t" << endl;
	cout << "2. ��renci Kay�t Sil" << endl;
	cout << "3. ��renci Kay�t Listele" << endl;
	cout << "4. Yeni ��retmen Kay�t" << endl;
	cout << "5. ��retmen Kay�t Sil" << endl;
	cout << "6. ��retmen Listele" << endl;
	cout << "7. Ana Men�" << endl;
	cout << "> ";
	cin >> secim;
	
	switch(secim){
		case 1:
			system("CLS");
			
			cout << "��rencinin Ad�n� Giriniz     : ";
			cin >> ad;
			cout << "��rencinin Soyad�n� Giriniz  : ";
			cin >> soyad;
			cout << "��rencinin Numaras�n� Giriniz: ";
			cin >> no;
			
			i++;
			
			ogrenci[i].yeniOgrenciKayit(ad, soyad, no);
			
			gorevliMenu();
		case 2:
			system("CLS");
			
			cout << "��rencinin Numaras�n� Giriniz: ";
			cin >> aranan;
			
			for(int j = 0; j <= i; j++){
				if(ogrenci[j].numara == aranan){
					for(int k = j; k < i; k++){
						ogrenci[k] = ogrenci[k + 1];
						
						cout << "Kay�t Ba�ar�yla Silindi!" << endl;
						
						i--;
					}
		    	}
			}
			
			system("PAUSE");
			gorevliMenu();
		case 3:
			system("CLS");
			
			for(int j = 0; j <= i; j++){
				cout << "Ad      : " << ogrenci1[j].ad << endl;
				cout << "Soyad   : " << ogrenci1[j].soyad << endl;
				cout << "Numara  : " << ogrenci1[j].numara << endl;
				cout << endl;
			}
			
			system("PAUSE");
			gorevliMenu();
		case 4:
			system("CLS");
			
			cout << "��retmenin Ad�n� Giriniz              : ";
			cin >> ad;
			cout << "��retmenin Soyd�n� Giriniz            : ";
			cin >> soyad;
			cout << "��retmenin Verece�i Dersi Giriniz     : ";
			cin >> ders;
			cout << "��retmenin Kullanaca�� �ifreyi Giriniz: ";
			cin >> sifre;
			
			a++;
			numara++;
			
			ogretmen[a].yeniOgretmenKayit(numara, ad, soyad, ders, sifre);
			
			gorevliMenu();
		case 5:
			system("CLS");
			
			cout << "��retmenin Numaras�n� Giriniz: ";
			cin >> aranan;
			
			for(int j = 0; j <= a; j++){
				if(ogretmen[j].ogretmenNo == aranan){
					for(int k = j; k < a; k++){
						ogretmen[k] = ogretmen[k + 1];
						
						cout << "Kay�t Ba�ar�yla Silindi!" << endl;
						
						a--;
					}
		    	}
			}
			
			system("PAUSE");
			gorevliMenu();
		case 6:
			system("CLS");
			
			system("CLS");
			
			for(int j = 0; j <= a; j++){
				cout << "Ad          : " << ogretmen[j].ogretmenAd << endl;
				cout << "Soyad       : " << ogretmen[j].ogretmenSoyad << endl;
				cout << "Verdi�i Ders: " << ogretmen[j].ders << endl;
				cout << endl;
			}
			
			system("PAUSE");
			gorevliMenu();
		case 7:
			anaMenu();
	}
}
