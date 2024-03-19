#include <iostream>
using namespace std;

int mail()
{
	int x;
	srand(time(0));

	x = rand() % 10;

	cout << "Nilai X awal ; " << x << endl;

	while (x > 4) {
		cout << "Perulangan While" << endl;
		x = rand() % 10;

		cout << "Nilai X : " << x << endl;
	}
}