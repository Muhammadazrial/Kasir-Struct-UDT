#include <iostream>
#include <string.h>
#include <iomanip>

using namespace std;

struct DataBarang
{
	int jum_beli, jumlah[50], harga[50];
	string nama_barang[50];
};
DataBarang Brg[50];

int main() {
	int bayar, sub_tot[50];
	float tot;

		cout << "PROGRAM C++ KASIR" << endl;
		cout << "---------------------------" << endl;
		cout << endl;
		cout << "Masukan Jumlah Beli : ";
		cin >> Brg[50].jum_beli;

	for (int i = 0; i < Brg[50].jum_beli; i++) {
		cout << endl;
		cout << "Masukan Barang Ke-" << i + 1 << endl;

		cout << "Nama Barang : ";cin >> Brg[i].nama_barang[i];

		cout << "Jumlah      : ";cin >> Brg[i].jumlah[i];

		cout << "Harga       : ";cin >> Brg[i].harga[i];

		sub_tot[i] = Brg[i].jumlah[i] * Brg[i].harga[i];
		tot += sub_tot[i];
		
	}
	cout << endl;
	cout << "STRUK BELANJA MINI MARKET BABE" << endl;
	cout << "---------------------------------------------------------" << endl;
	cout << "No   Barang    Jumlah     Harga     Sub Total" << endl;
	for (int i = 0; i < Brg[50].jum_beli; i++) {
		cout << i + 1 << setw(8) << Brg[i].nama_barang[i] << setw(10) << Brg[i].jumlah[i] << setw(12) << Brg[i].harga[i] << setw(12) << sub_tot[i] << endl;
	}

			cout << endl;
			cout << "--------------------------------------------------------\n";
			cout << "Jumlah Bayar : Rp." << tot << endl;
			cout << "Bayar        : Rp.";
			cin >> bayar;
			cout << "Kembali      : Rp." << bayar - tot << endl;
		
	
	system("pause");
		return 0;
}
