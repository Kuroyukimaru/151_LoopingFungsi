#include <iostream>
using namespace std;

int sisi;

void inputdata(){
	cout << "Masukkan Nilai sisi :";
	cin >> sisi;

	}

int hitungluas() {
	return sisi * sisi;
}

void display() {
	cout << "Luas Persegi :" << hitungluas() << endl;

}

int main()
{
	inputdata();
	display();
}