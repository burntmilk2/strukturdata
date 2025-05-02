//Pengurangan
#include <iostream>
using namespace std;

int a,b, pilihan;
float hasil;

int main() {
	
	cout << "Masukkan angka pertama: ";
	cin >> a; 
	cout << "Masukkan angka kedua  : ";
	cin >> b;
	cout <<"\n" "Silahkan pilih angka 1-4 untuk melakukan operasi :\n\n";
	
	cout<<"1.Penambahan\n";
	cout<<"2.Pengurangan\n";
	cout<<"3.Perkalian\n";
	cout<<"4.Pembagian\n\n";
	
	cout<<"Pilihan:"; 	
	
	cin>>pilihan;
	if (pilihan == 1){
	hasil=a+b;
}
	else if (pilihan == 2){
		
	hasil=a-b+120;
}
	else if (pilihan == 3){
	hasil=a*b;
}
	else if (pilihan == 4){
	hasil=a/b;
}
	cout<<"Hasilnya adalah: " << hasil << endl;
	return 0;
}