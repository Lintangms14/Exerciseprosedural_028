#include <iostream>
using namespace std;

double isDitrima(double math, double BInggris) {
	double rerata = (math + BInggris) / 2;
	return (rerata >= 70 || math > 80);
}

int main() {
	string nama[20];
	int nilai_math[20], nilai_BInggris[20];
	double ditrima[20];
	int total_ditrima = 0,, total_tidak_ditrima = 0;

	for (int i = 0; i < 20; i++) {
		cout << "Masukan Nama Mahasiswa ke- " << i + 1 << ": ";
		cin >> nama[i];
		cout << "Masukkan Nilai Matematika Mahasiswa ke- " << i + 1 << ": ";
		cin >> nilai_math[i];
		cout << "Masukkan Nilai Bahasa Inggris Mahasiswa ke- " << i + 1 << ": ";
		cin >> nilai_BInggris[i];

		ditrima[i] = isDitrima(nilai_math[i], nilai_BInggris[i]);

		if (ditrima[i]) {
			total_ditrima++;
		}
		else {
			total_tidak_ditrima++;
		}
	}

	cout << "\n\nNama\tStatus" << endl;
	for (int i = 0; i < 20; i++) {
		cout << nama[i] << "\t";
		if (ditrima[i]) {
			cout << "Ditrima" << endl;
		}
		else {
			cout << "Tidak Ditrima" << endl;
		}
	}
	cout << "Jumlah Kandidat Yang Di Trima : " << total_ditrima << endl;
	cout << "Jumlah Kandidat Yang Tidak Di Trima : " << total_tidak_ditrima << endl;
	return 0;
}