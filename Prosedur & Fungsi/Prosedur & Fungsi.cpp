#include <iostream>
using namespace std;

	int Panjang, Lebar;

	void inputdata() {
		cout << "Masukkan Nilai Panjang : ";
		cin >> Panjang;
		cout << "Masukkan Nilai Lebar : ";
		cin >> Lebar;
	}

	int hitungluas() {
		return Panjang * Lebar;
	}

	void Bebas() {
		cout << "Luasnya adalah : " << hitungluas() << endl;
	}

	int main() {
		inputdata();
		Bebas();
	}