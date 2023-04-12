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
};
