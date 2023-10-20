#include <iostream>
using namespace std;

int main(void) {
    setlocale(LC_ALL, "Turkish");

    int i, j, e;
    char fks;
    string takimlar[4], t;
    string h1[2][2], h2[2][2], h3[2][2], h4[2][2], h5[2][2], h6[2][2];

    cout << "Fikstür oluşturulsun mu? (E/H): ";
    cin >> fks;

    switch (fks){
        case 'H':
            for (i = 0; i < 2; i++) {
                for (j = 0; j < 2; j++) {
                    cout << "1. Hafta - " << i + 1 << ". Maç - " << j + 1 << ". Takım: ";
                    cin >> h1[i][j];
                }
                cout << endl;
            }

            cout << "\n\n";

            for (i = 0; i < 2; i++) {
                for (j = 0; j < 2; j++) {
                    cout << "2. Hafta - " << i + 1 << ". Maç - " << j + 1 << ". Takım: ";
                    cin >> h2[i][j];
                }
                cout << endl;
            }

            cout << "\n\n";

            for (i = 0; i < 2; i++) {
                for (j = 0; j < 2; j++) {
                    cout << "3. Hafta - " << i + 1 << ". Maç - " << j + 1 << ". Takım: ";
                    cin >> h3[i][j];
                }
                cout << endl;
            }

            cout << "\n\n";

            for (i = 0; i < 2; i++) {
                for (j = 0; j < 2; j++) {
                    cout << "4. Hafta - " << i + 1 << ". Maç - " << j + 1 << ". Takım: ";
                    cin >> h4[i][j];
                }
                cout << endl;
            }

            cout << "\n\n";

            for (i = 0; i < 2; i++) {
                for (j = 0; j < 2; j++) {
                    cout << "5. Hafta - " << i + 1 << ". Maç - " << j + 1 << ". Takım: ";
                    cin >> h5[i][j];
                }
                cout << endl;
            }

            cout << "\n\n";

            for (i = 0; i < 2; i++) {
                for (j = 0; j < 2; j++) {
                    cout << "6. Hafta - " << i + 1 << ". Maç - " << j + 1 << ". Takım: ";
                    cin >> h6[i][j];
                }
                cout << endl;
            }



        case 'E':
            for (i = 0; i < 4; i++) {
                cout << i + 1 << ". Takım: ";
                cin >> takimlar[i];
            }

            for (i = 0; i < 2; i++) {
                for (j = 0; j < 2; j++) {
                    h1[i][j] = takimlar[i];
                }
                cout << endl;
            }

            for (i = 0; i < 2; i++) {
                for (j = 0; j < 2; j++) {
                    h2[i][j] = takimlar[i];
                }
                cout << endl;
            }

            for (i = 0; i < 2; i++) {
                for (j = 0; j < 2; j++) {
                    h3[i][j] = takimlar[i];
                }
                cout << endl;
            }
    } 

    system("PAUSE");
    return 0;
}