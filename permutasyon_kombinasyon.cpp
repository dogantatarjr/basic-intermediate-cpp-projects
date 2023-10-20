#include <iostream>
#include <string>
using namespace std;

int faktoriyel(int);
int permutasyon(int, int);
int kombinasyon(int, int);

int faktoriyel(int n) {
    int i, fakt = 1;

    for (i = n; i > 0; i--) {
        fakt = fakt * i;
    }

    return fakt;
}

int permutasyon(int n, int r) {
    int perm = faktoriyel(n) / faktoriyel(n - r);
    return perm;
};

int kombinasyon(int n, int r) {
    int komb = faktoriyel(n) / (faktoriyel(n - r) * faktoriyel(r));
    return komb;
};

int main() {
    setlocale(LC_ALL, "Turkish");

    int n, r;

    cout << "'n' değerini giriniz: ";
    cin >> n;

    cout << "'r' değerini giriniz: ";
    cin >> r;

    cout << endl;

    cout << "P(" << n << "," << r << ") = " << permutasyon(n,r) << endl;
    cout << "C(" << n << "," << r << ") = " << kombinasyon(n, r) << endl;
 
    system("PAUSE");
    return 0;
}