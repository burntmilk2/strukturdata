#include <iostream>
using namespace std;

int main () {
	int bilangan_pertama, bilangan_kedua, jumlah;
	cout << "masukan dua bilangan: ";
	cin >> bilangan_pertama >> bilangan_kedua;
	
	jumlah = bilangan_pertama + bilangan_kedua;
	
	cout << bilangan_pertama << "+" <<
	bilangan_kedua << " = " << jumlah;
	
	return 0;
}