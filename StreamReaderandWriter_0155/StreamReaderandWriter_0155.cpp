
#include <fstream>
#include <iostream>
#include <string>
using namespace std;


int main() {
	// untuk menyimpan file data berbentuk string
	string baris;

	//membuka file dalam mode menulis
	ofstream outfile;

	// menunjuk ke sebuah nama file
	outfile.open("contohfile.txt");

	cout << ">= menulis file, \'q\' untuk keluar " << endl;

	// undelimited loop untuk menulis
	while (true) {
		cout << "_ ";
		// mendapatkan setiap karakter dalam satu baris
		getline(cin, baris);
		// loop akan berenti jika anda memasukan karakter q
		if (baris == "q") break;
		// menulis dan memasukannilai dari baris ke dalam fila
		outfile << baris << endl;

	}
	// selesai dalam menulis sekarang tutup file nya
	outfile.close();

	// membuka file dalam mode membaca
	ifstream infile;

	// menunjuk sebuah file
	infile.open("contohfile.txt");

	cout << endl << ">= Membuka dan membaca file " << endl;
	// jika file ada maka
	if (infile.is_open()) {
		// melakukan perulangan setiap baris
		while (getline(infile, baris)) {
			// dan tampilkan disini
			cout << baris << '\n';
		}
		//tutup file tersebut setelah selesai
		infile.close();
	}
	

}