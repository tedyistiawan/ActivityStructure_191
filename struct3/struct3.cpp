#include <iostream>

using namespace std;
struct AlamatDetail
{
	char desa[20];
	char kota[20];
};

struct mahasiswa {
	char nim[12];
	char nama[20];
	AlamatDetail alamat;
	int umur;
};

int main() {

	mahasiswa mhs[3];

	for (int i = 0; i < 3; i++)
	{
		cout << "masukan nim; ";
		cin.getline(mhs[1].nim, 12);
		cout << "masukan nama: ";
		cin.getline(mhs[i].nama, 20);
		cout << "Alamat: " << endl;
		cout << "\tnama desa : ";
		cin.getline(mhs[i].alamat.desa, 20);
		cout << "\tnama kota : ";
		cin.getline(mhs[i].alamat.kota, 20);
		cout << "masukan umur: ";
		cin >> mhs[1].umur;
		cin.ignore(1, '\n');
	}

	for (int i = 0; i < 3; i++)
	{
		cout << "\nNim : " << mhs[i].nim;
		cout << "\nnama : " << mhs[i].nama;
		cout << "\ndesa : " << mhs[i].alamat.desa;
		cout << "\nkota : " << mhs[i].alamat.kota;
		cout << "\numur : " << mhs[i].umur;
	}
}