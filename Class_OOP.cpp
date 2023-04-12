#include <iostream>
using namespace std;


class mahasiswa {
private:
	int nim;
	string nama;
public:
	void inputdata() {
		cout << "masukan NIM	:";
		cin >> nim;
		cout << "masukan nama	:";
		cin >> nama;
	}
	void tampildata() {
		cout << "\nNIM	:" << nim << endl;
		cout << "nama	:" << nama << endl;
	}
};

class Matakuliah {
private:
	string kodemk, namamk;
	int sks;

public:
	void inputmk();
	void tampilmk();
};

void Matakuliah::inputmk() {
	cout << "masukan kodemk	:";
	cin >> kodemk;
	cout << "masukan namamk	:";
	cin >> namamk;
	cout << "masukan sksmk	:";
	cin >> sks;
}


int main() {
	mahasiswa mhs;

	mhs.inputdata();
	mhs.tampildata();
}