#include <iostream>
using namespace std;
int main()
{
    int baris, kolom;
    int matrik1 [20][20], matrik2 [20][20], hasil [20][20];
    cout << "Masukan jumlah baris: ";
    cin >> baris;

    cout << "Masukan jumlah kolom: ";
    cin >> kolom;

    cout << "Masukan angka matriks pertama: \n";
    for(int i = 0; i < baris; ++i){
        for(int j = 0; j < kolom; ++j){
            cin >> matrik1 [i][j];
        }
    }
    cout << "Masukan angka matriks kedua: \n";
    for(int i = 0; i < baris; ++i){
        for(int j = 0; j < kolom; ++j){
            cin >> matrik2 [i][j];
        }
    }
    cout << "Hasil: \n";
    for(int i = 0; i < baris; i++){
        for(int j = 0; j < kolom; j++){
            hasil [i][j] = matrik1 [i][j] * matrik2 [i][j];
            cout << hasil [i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}
