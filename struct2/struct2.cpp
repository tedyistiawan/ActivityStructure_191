#include <iostream>

using namespace std;


struct AlamatDetail {
	string desa;
	string kota;

};

struct mahasiswa {
	string Nim;
	string Nama;
	AlamatDetail alamat;
	int umur;
};

int main() {
	mahasiswa mhs;

	cout << "masukan nim: ";
	cin >> mhs.Nim;
	cout << "masukan nama: ";
	cin >> mhs.Nama;
	cout << "alamat: " << endl;
	cout << "\tNama desa : ";
	cin >> mhs.alamat.desa;
	cout << "\tNama kota : ";
	cin >> mhs.alamat.kota;
	cout << "masukan umur: ";
	cin >> mhs.umur;

	cout << "\nNim : " << mhs.Nim;
	cout << "\nnama : " << mhs.Nama;
	cout << "\ndesa : " << mhs.alamat.desa;
	cout << "\nkota : " << mhs.alamat.kota;
}