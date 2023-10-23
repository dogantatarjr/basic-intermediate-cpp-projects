#include <iostream>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "Turkish");

    int yuzler, onlar, birler, sayi;

    cout << "1 ile 999 arasında bir tam sayı giriniz: ";
    cin >> sayi;

    yuzler = sayi / 100;
    onlar = sayi % 100 / 10;
    birler = sayi % 100 % 10;

    switch (yuzler){
        case 0:
            cout << "";
            break;
        case 1:
            cout << "Yüz ";
            break;
        case 2:
            cout << "İki Yüz ";
            break;
        case 3:
            cout << "Üç Yüz ";
            break;
        case 4:
            cout << "Dört Yüz ";
            break;
        case 5:
            cout << "Beş Yüz ";
            break;
        case 6:
            cout << "Altı Yüz ";
            break;
        case 7:
            cout << "Yedi Yüz ";
            break;
        case 8:
            cout << "Sekiz Yüz ";
            break;
        case 9:
            cout << "Dokuz Yüz ";
            break;
    }

    switch (onlar) {
    case 0:
        cout << " ";
        break;
    case 1:
        cout << "On ";
        break;
    case 2:
        cout << "Yirmi ";
        break;
    case 3:
        cout << "Otuz ";
        break;
    case 4:
        cout << "Kırk ";
        break;
    case 5:
        cout << "Elli ";
        break;
    case 6:
        cout << "Altmış ";
        break;
    case 7:
        cout << "Yetmiş ";
        break;
    case 8:
        cout << "Seksen ";
        break;
    case 9:
        cout << "Doksan ";
        break;
    }

    switch (birler) {
    case 0:
        cout << "";
        break;
    case 1:
        cout << "Bir";
        break;
    case 2:
        cout << "İki";
        break;
    case 3:
        cout << "Üç";
        break;
    case 4:
        cout << "Dört";
        break;
    case 5:
        cout << "Beş";
        break;
    case 6:
        cout << "Altı";
        break;
    case 7:
        cout << "Yedi";
        break;
    case 8:
        cout << "Sekiz";
        break;
    case 9:
        cout << "Dokuz";
        break;
    }

    cout << endl;

    system("PAUSE");
    return 0;
}