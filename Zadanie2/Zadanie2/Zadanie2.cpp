#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	int tablica[5] = { 1,2,3,4,5 };

	cout << "tablica = " << tablica << endl;
	cout << "&tablica = " << &tablica << endl << endl;
	cout << "&tablica[0] = " << &tablica[0] << endl;
	cout << "&tablica[1] = " << &tablica[1] << endl;
	cout << "&tablica[2] = " << &tablica[2] << endl;
	cout << "&tablica[3] = " << &tablica[3] << endl;
	cout << "&tablica[4] = " << &tablica[4] << endl << endl;

	return 0;
}

