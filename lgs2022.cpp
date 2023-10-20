#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Turkish");

    double tur_d, mat_d, fen_d, ink_d, din_d, ing_d;
    double tur_y, mat_y, fen_y, ink_y, din_y, ing_y;
    double tur_b, mat_b, fen_b, ink_b, din_b, ing_b;
    double tur_n, mat_n, fen_n, ink_n, din_n, ing_n;
    double tur_p, mat_p, fen_p, ink_p, din_p, ing_p;
    double const tur_k = 3.929323, mat_k = 4.941955, fen_k = 3.713158, ink_k = 1.755714, din_k = 1.666466, ing_k = 1.483233;

    // Türkçe

    while (true) {
        cout << "Türkçe" << endl;
        cout << "------" << endl;

        cout << "Doğru : ";
        cin >> tur_d;

        if (tur_d > 20) {
            cout << "Geçerli bir diğer giriniz!" << endl;
            continue;
        };

        if (tur_d <= 20) {
            cout << "Yanlış: ";
            cin >> tur_y;

            if (tur_y > 20 || tur_d + tur_y > 20) {

                cout << "Geçerli bir diğer giriniz!" << endl;
                continue;
            };

            if (tur_y <= 20 && tur_d + tur_y <= 20) {
                tur_b = 20 - (tur_d + tur_y);
                cout << "Boş: " << tur_b << endl;

                tur_n = tur_d - (tur_y / 3);
                cout << "Net: " << tur_n << endl;

                tur_p = tur_n * tur_k;

                cout << endl;
                break;
            };
        };
    };

    // Matematik

    while (true) {
        cout << "Matematik" << endl;
        cout << "---------" << endl;

        cout << "Doğru : ";
        cin >> mat_d;

        if (mat_d > 20) {
            cout << "Geçerli bir değer giriniz!" << endl;
            continue;
        };

        if (mat_d <= 20) {
            cout << "Yanlış: ";
            cin >> mat_y;

            if (mat_y > 20 || mat_d + mat_y > 20) {

                cout << "Geçerli bir değer giriniz!" << endl;
                continue;
            };

            if (mat_y <= 20 && mat_d + mat_y <= 20) {
                mat_b = 20 - (mat_d + mat_y);
                cout << "Boş: " << mat_b << endl;

                mat_n = mat_d - (mat_y / 3);
                cout << "Net: " << mat_n << endl;

                mat_p = mat_n * mat_k;

                cout << endl;
                break;
            };
        };
    };

    // Fen Bilimleri

    while (true) {
        cout << "Fen Bilimleri" << endl;
        cout << "-------------" << endl;

        cout << "Doğru : ";
        cin >> fen_d;

        if (fen_d > 20) {
            cout << "Geçerli bir değer giriniz!" << endl;
            continue;
        };

        if (fen_d <= 20) {
            cout << "Yanlış: ";
            cin >> fen_y;

            if (fen_y > 20 || fen_d + fen_y > 20) {

                cout << "Geçerli bir değer giriniz!" << endl;
                continue;
            };

            if (fen_y <= 20 && fen_d + fen_y <= 20) {
                fen_b = 20 - (fen_d + fen_y);
                cout << "Boş: " << fen_b << endl;

                fen_n = fen_d - (fen_y / 3);
                cout << "Net: " << fen_n << endl;

                fen_p = fen_n * fen_k;

                cout << endl;
                break;
            };
        };
    };

    // TC İnklap Tarihi ve Atatürkçülük

    while (true) {
        cout << "TC İnklap Tarihi ve Atatürkçülük" << endl;
        cout << "--------------------------------" << endl;

        cout << "Doğru : ";
        cin >> ink_d;

        if (ink_d > 10) {
            cout << "Geçerli bir değer giriniz!" << endl;
            continue;
        };

        if (ink_d <= 10) {
            cout << "Yanlış: ";
            cin >> ink_y;

            if (ink_y > 10 || ink_d + ink_y > 10) {

                cout << "Geçerli bir değer giriniz!" << endl;
                continue;
            };

            if (ink_y <= 10 && ink_d + ink_y <= 10) {
                ink_b = 10 - (ink_d + ink_y);
                cout << "Boş: " << ink_b << endl;

                ink_n = ink_d - (ink_y / 3);
                cout << "Net: " << ink_n << endl;

                ink_p = ink_n * ink_k;

                cout << endl;
                break;
            };
        };
    };

    // Din Kültürü ve Ahlak Bilgisi

    while (true) {
        cout << "Din Kültürü ve Ahlak Bilgisi" << endl;
        cout << "----------------------------" << endl;

        cout << "Doğru : ";
        cin >> din_d;

        if (din_d > 10) {
            cout << "Geçerli bir değer giriniz!" << endl;
            continue;
        };

        if (din_d <= 10) {
            cout << "Yanlış: ";
            cin >> din_y;

            if (din_y > 10 || din_d + din_y > 10) {

                cout << "Geçerli bir değer giriniz!" << endl;
                continue;
            };

            if (din_y <= 10 && din_d + din_y <= 10) {
                din_b = 10 - (din_d + din_y);
                cout << "Boş: " << din_b << endl;

                din_n = din_d - (din_y / 3);
                cout << "Net: " << din_n << endl;

                din_p = din_n * din_k;

                cout << endl;
                break;
            };
        };
    };

    // İngilizce

    while (true) {
        cout << "İngilizce" << endl;
        cout << "---------" << endl;

        cout << "Doğru : ";
        cin >> ing_d;

        if (ing_d > 10) {
            cout << "Geçerli bir değer giriniz!" << endl;
            continue;
        };

        if (ing_d <= 10) {
            cout << "Yanlış: ";
            cin >> ing_y;

            if (ing_y > 10 || ing_d + ing_y > 10) {

                cout << "Geçerli bir değer giriniz!" << endl;
                continue;
            };

            if (ing_y <= 10 && ing_d + ing_y <= 10) {
                ing_b = 10 - (ing_d + ing_y);
                cout << "Boş: " << ing_b << endl;

                ing_n = ing_d - (ing_y / 3);
                cout << "Net: " << ing_n << endl;

                ing_p = ing_n * ing_k;

                cout << endl;
                break;
            };
        };
    };

    // Puan Hesaplama

    double puan = tur_p + mat_p + fen_p + ink_p + din_p + ing_p + 200;

    if (puan > 500) {
        puan = 500;
    };

    if (puan < 100) {
        puan = 100;
    };

    cout << "Aldığınız Puan: " << puan;
    cout << endl;
    cout << endl;

    // Girebileceğimiz Okulları Belirleme

    int i, j, sayac = 0;
    string okullar[10] = {"İstanbul Erkek", "Galatasaray", "Kabataş", "Beşiktaş Anadolu", "Çapa Fen", "Sakıp Sabancı", "Pertevniyal", "Beşiktaş Atatürk Anadolu", "Cağaloğlu", "Vefa"};
    double puanlar[10] = { 496, 491, 488, 483, 478, 473, 468, 463, 458, 453 };

    for (j = 0; j < 10; j++) {
        if (puanlar[j] <= puan) {
            sayac += 1;
        };
        if (puanlar[j] > puan) {
            continue;
        };
    };
    
    if (sayac > 0) {
        cout << "Aşağıdaki listede bulunan " << sayac << " okula girebilirsiniz:" << endl;
        cout << "--------------------------------------------------" << endl;

        for (i = 0; i < 10; i++) {
            if (puanlar[i] <= puan) {
                cout << okullar[i] << " - " << puanlar[i] << endl;
            };
            if (puanlar[i] > puan) {
                continue;
            };
        };
    };

    if (sayac == 0) {
        cout << "Aldığınız puan ile girebileceğiniz bir okul bulunmamaktadır." << endl;
    };

    system("PAUSE");
    return 0;
}