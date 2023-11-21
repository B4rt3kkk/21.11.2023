#include <iostream>
#include <string>
using namespace std;

int main()
{
	string* wsk;
	string nazwa = "Bartek";
	cout << "Wskazniki" << endl;
	wsk = &nazwa;
	cout << "WSK=" << wsk << endl;
	cout << "*WSK=" << *wsk << endl;
	cout << "Liczba=" << nazwa << endl;
	cout << "&Liczba=" << &nazwa << endl;
	cout << "&WSK=" << &wsk << endl;
	return 0;
}
