
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
		getline(cin, baris);
		if (baris == "q") break;
		outfile << baris << endl;

	}

}