#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int hesapla(int ilkTerim, int sonTerim, int artisMiktari) {

    return (((sonTerim - ilkTerim) / artisMiktari) + 1) * ((sonTerim + ilkTerim) / 2);

}

int main() {
    setlocale(LC_ALL, "Turkish");

    int ilkTerim, sonTerim, artisMiktari;

    cout << "İlk Terim: ";
    cin >> ilkTerim;

    cout << "Son Terim: ";
    cin >> sonTerim;

    cout << "Artış Miktarı: ";
    cin >> artisMiktari;

    cout << endl;

    cout << "Bütün terimlerin toplamı: " << hesapla(ilkTerim, sonTerim, artisMiktari) << endl;

    cout << endl;

    system("PAUSE");
    return 0;
}
