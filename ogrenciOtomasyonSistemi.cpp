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
	
	cout << "- Öðretmen Not Sistemi -" << endl;
	cout << endl;
	cout << "1. Öðrenci Not Giriþi" << endl;
	cout << "2. Sýnýf Not Ortalamasý" << endl;
	cout << "3. Öðrenci Listesi" << endl;
	cout << "4. Ana Menü" << endl;
	cout << "> ";
	cin >> secim;
	
	switch(secim){
		case 1:
			system("CLS");
			
			cout << "Notu girilecek öðrencinin numarasýný giriniz: ";
			cin >> n;
			
			for(int c = 0; c < 150; c++){
				if(ogrenci[c].numara == n){
					system("CLS");
					
					cout << "Vize Notunu Giriniz: ";
					cin >> ogrenci[c].vize;
					
					cout << "Final Notunu Giriniz: ";
					cin >> ogrenci[c].final;
					
					cout << "Ýþlem Baþarýlý!" << endl;
					
					d++;
					
					ogrenci[c].ortalama = double(ogrenci[c].vize * 0.3 + ogrenci[c].final * 0.7);
					
					ogrenci1[d] = ogrenci[c];
					
					system("PAUSE");
					ogretmenMenu();
				} else {
					cout << "Öðrenci Bulunamadý!!!" << endl;
					
					system("PAUSE");
					ogretmenMenu();
				}
			}
		case 2:
			system("CLS");
			
			cout << "Sýnýfýn Not Ortalamasý: ";
			
			if(d < 0){
				cout << "Bu dersi alan öðrenci bulunmamakta!" << endl;
				
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
	cout << "1. Görevli Giriþi" << endl;
	cout << "2. Öðretmen Giriþi" << endl;
	cout << "3. Çýkýþ" << endl;
	cout << "> ";
	cin >> secim;
	
	switch(secim){
		case 1:
			system("CLS");
			
			cout << "Kullanýcý ID: ";
			cin >> kullaniciID;
			
			if(kullaniciID == "1"){
				cout << "Þifre: ";
				cin >> kullaniciSifre;
				
				if(kullaniciSifre == "1"){
					gorevliMenu();
				} else {
					cout << "Þifre Yanlýþ!!!" << endl;
					system("PAUSE");
					anaMenu();
				}
			} else {
				cout << "Hatalý Giriþ!!!" << endl;
				system("PAUSE");
				anaMenu();
			}
		case 2:
			system("CLS");
			
			cout << "Numara Girin: ";
			cin >> number;
			
			for(b = 0; b < 15; b++){
				if(ogretmen[b].ogretmenNo == number){
					cout << "Þifre Doðru!" << endl;
					
					system("PAUSE");
					ogretmen[b].ogretmenMenu();
				} else {
					cout << "Þifre Yanlýþ!" << endl;
					
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
	cout << "1. Yeni Öðrenci Kayýt" << endl;
	cout << "2. Öðrenci Kayýt Sil" << endl;
	cout << "3. Öðrenci Kayýt Listele" << endl;
	cout << "4. Yeni Öðretmen Kayýt" << endl;
	cout << "5. Öðretmen Kayýt Sil" << endl;
	cout << "6. Öðretmen Listele" << endl;
	cout << "7. Ana Menü" << endl;
	cout << "> ";
	cin >> secim;
	
	switch(secim){
		case 1:
			system("CLS");
			
			cout << "Öðrencinin Adýný Giriniz     : ";
			cin >> ad;
			cout << "Öðrencinin Soyadýný Giriniz  : ";
			cin >> soyad;
			cout << "Öðrencinin Numarasýný Giriniz: ";
			cin >> no;
			
			i++;
			
			ogrenci[i].yeniOgrenciKayit(ad, soyad, no);
			
			gorevliMenu();
		case 2:
			system("CLS");
			
			cout << "Öðrencinin Numarasýný Giriniz: ";
			cin >> aranan;
			
			for(int j = 0; j <= i; j++){
				if(ogrenci[j].numara == aranan){
					for(int k = j; k < i; k++){
						ogrenci[k] = ogrenci[k + 1];
						
						cout << "Kayýt Baþarýyla Silindi!" << endl;
						
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
			
			cout << "Öðretmenin Adýný Giriniz              : ";
			cin >> ad;
			cout << "Öðretmenin Soydýný Giriniz            : ";
			cin >> soyad;
			cout << "Öðretmenin Vereceði Dersi Giriniz     : ";
			cin >> ders;
			cout << "Öðretmenin Kullanacaðý Þifreyi Giriniz: ";
			cin >> sifre;
			
			a++;
			numara++;
			
			ogretmen[a].yeniOgretmenKayit(numara, ad, soyad, ders, sifre);
			
			gorevliMenu();
		case 5:
			system("CLS");
			
			cout << "Öðretmenin Numarasýný Giriniz: ";
			cin >> aranan;
			
			for(int j = 0; j <= a; j++){
				if(ogretmen[j].ogretmenNo == aranan){
					for(int k = j; k < a; k++){
						ogretmen[k] = ogretmen[k + 1];
						
						cout << "Kayýt Baþarýyla Silindi!" << endl;
						
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
				cout << "Verdiði Ders: " << ogretmen[j].ders << endl;
				cout << endl;
			}
			
			system("PAUSE");
			gorevliMenu();
		case 7:
			anaMenu();
	}
}
