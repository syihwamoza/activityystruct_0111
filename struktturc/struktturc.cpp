#include <iostream>
using namespace std;

struct Mahasiswa {
	string nim;
	string nama;
	string alamat;
	int umur;
};
int main() {
	Mahasiswa mhs;
	cout << "nomor mahasiswa :";
	cin >> mhs.nama;
	cout << "nama mahasiswa : ";
	cin >> mhs.nama;
	cout << "alamat mahasiswa :";
	cin >> mhs.alamat;
	cout << "umur mahasiswa :";
	cin >> mhs.umur;
}
