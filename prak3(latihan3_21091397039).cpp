#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int angka, jumlah, max;

cout << "\tProgram mengambil memory address nilai maksimum" << endl;
cout << endl;
cout << "Masukkan jumlah angka	: "; cin >> jumlah;
cout << endl;

	for (int i = 1; i <= jumlah; i++) {
cout << "Masukkan Angka	: "; cin >> angka;
			if ( i == 1 ) {
				max = angka;
			}
            else if ( max < angka) {
				max = angka;
           }
			else {}
           }
cout << endl;
cout << "Nilai maksimum	: " <<  max << endl;

getch();
	
}
