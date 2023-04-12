#include <iostream>
using namespace std;

class Mahasiswa {
private:
	int nim;
	string nama;
	float nilai;

public:
	void input() {
		cout << "Masukkan NIM \t: ";
		cin >> nim;
		cout << "Masukkan Nama \t: ";
		cin >> nama;
		cout << "Masukkan nilai \t: ";
		cin >> nilai;
	}

	void printData();

};

void  Mahasiswa::printData() {
	cout << "\nData Mahasiswa";
	cout << "\nNIM\t:" << nim;
	cout << "\nNama\t:" << nama;
	cout << "\nNilai\t:" << nilai;

}

class mataKuliah {
private:
	string kode;
	string namaMK;
	int sks;

public:
	void inputMK() {
		cout << "\n\nMasukkan Kode matakuliah :";
		cin >> kode;
		cout << "Masukkan Nama matakuliah :";
		cin >> namaMK;
		cout << "Masukkan sks matakuliah  :";
		cin >> sks;
	}

	void tampil() {
		cout << "\nData Matakuliah";
		cout << "\nKode Matakuliah	\t:" << kode;
		cout << "\nNama	Matakuliah\t:" << namaMK;
		cout << "\nSks Matakuliah	\t:" << sks;

	}
};

int main() {
	Mahasiswa mhs;
	mataKuliah mk;

	mhs.input();
	mhs.printData();

	mk.inputMK();
	mk.tampil();
}
