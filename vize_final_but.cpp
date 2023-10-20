#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Turkish");

    int vize1, vize2, final, vizeoran, finaloran, tamnot, butunleme, butunlemeoran, butnot;
    double minfinal;

    cout << "1. Vize Notu: ";
    cin >> vize1;

    cout << "2. Vize Notu: ";
    cin >> vize2;

    vizeoran = ((vize1 + vize2) / 2) * 0.3;
    minfinal = (60 - vizeoran) / 0.7;

    cout << "Bu dersten geçmek için finalden en az almanız gereken not: " << round(minfinal) << endl;

    cout << "Final Notu: ";
    cin >> final;

    finaloran = final * 0.7;
    tamnot = finaloran + vizeoran;

    if (tamnot >= 60) {
        cout << "GEÇTİ" << endl;
    };
    if (tamnot < 60) {
        cout << "BÜTÜNLEMEYE KALDI" << endl;

        cout << "Bütünleme Notu: ";
        cin >> butunleme;

        vizeoran = ((vize1 + vize2) / 2) * 0.3;
        butunlemeoran = butunleme * 0.7;
        butnot = butunlemeoran + vizeoran;

        if (butnot >= 60) {
            cout << "GEÇTİ" << endl;
        };
        if (butnot < 60) {
            cout << "BU DERSTEN KALDI" << endl;
        };
    };

    system("PAUSE");
    return 0;
}