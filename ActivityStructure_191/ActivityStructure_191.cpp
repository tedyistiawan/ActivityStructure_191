#include <iostream>

using namespace std;

struct Mahasiswa {
	string nim;
	string nama;
	string alamat;
	int umur;
};

int main()
{
	Mahasiswa mhs1, mhs2;

	mhs1.nim = "202210140011";
	mhs1.nama = "Tasya";
	mhs1.alamat = "semarang";
	mhs1.umur = 20;

	cout << "\nNim : " << mhs1.nim;
	cin >> mhs2.nim;
	cout << "masukan nama: ";
	cin >> mhs2.nama;
	cout << "masukan alamat: ";
	cin >> mhs2.alamat;
	cout << "masukan umur: ";
	cin >> mhs2.umur;

	cout << "\nNim : " << mhs1.nim;
	cout << "\nnama : " << mhs1.nama;
	cout << "\nalamat : " << mhs1.alamat;
	cout << "\numur : " << mhs1.umur;

	cout << "\nNim : " << mhs2.nim;
	cout << "\nnama : " << mhs2.nama;
	cout << "\nalamat : " << mhs2.alamat;
	cout << "\numur : " << mhs2.umur;

}

