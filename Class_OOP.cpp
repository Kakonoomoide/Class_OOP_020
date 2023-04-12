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
	string kode, namamk;
	int sks;

public:

};

int main() {
	mahasiswa mhs;

	mhs.inputdata();
	mhs.tampildata();
}