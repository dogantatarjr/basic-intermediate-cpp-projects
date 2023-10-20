#include <iostream>
#include <stdio.h>
using namespace std;

struct tarih{         // Yapı Tanımlaması
    int gun, ay, yil; // Yapı Elemanları
};

struct tarih yas(struct tarih, struct tarih); // "tarih" türünde bir nesne döndüren fonksiyon prototipi

int main() {
    setlocale(LC_ALL, "Turkish");
    
    struct tarih bugun, dogum, sonuc; // "tarih" türünde 3 nesne oluşturuldu.

    cout << "Bugünün tarihini girin (gün,ay,yıl):" << endl;
    cin >> bugun.gun >> bugun.ay >> bugun.yil; // Kullanıcıdan "bugun" nesnesinin elemanları alındı.

    cout << "Doğum tarihinizi girin (gün,ay,yıl):" << endl;
    cin >> dogum.gun >> dogum.ay >> dogum.yil; // Kullanıcıdan "dogum" nesnesinin elemanları alındı.

    sonuc = yas(bugun, dogum);

    cout << sonuc.yil << " yıl " << sonuc.ay << " ay " << sonuc.gun << " gündür hayattasınız..." << endl;
    /* "sonuc" değişkenine aldığımız geri dönüş elemanlarını ekrana yazdırdık. */ 

    system("PAUSE");
    return 0;
}

struct tarih yas(struct tarih b, struct tarih d){
    struct tarih sonuc = { 0,0,0 }; // "sonuc" nesnesinin tüm elemanlarına 0 ataması yapıldı.

    if (b.gun < d.gun) {
        b.ay -= 1;
        sonuc.gun += 30 + b.gun - d.gun;
    } else sonuc.gun = b.gun - d.gun;

    if (b.ay < d.ay) {
        b.yil -= 1;
        sonuc.ay += 12 + b.ay - d.ay;
    } else sonuc.ay += b.ay - d.ay;

sonuc.yil += b.yil - d.yil;
return sonuc;
}
