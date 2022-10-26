#include <iostream>
#include <string>
using namespace std;

int main()
{
	string arr[11];
	arr[1] = "Satu";
	arr[2] = "Dua";
	arr[3] = "Tiga";
	arr[4] = "Empat";
	arr[5] = "Lima";
	arr[6] = "Enam";
	arr[7] = "Tujuh";
	arr[8] = "Delapan";
	arr[9] = "Sembilan";
	
	cout << "Bilangan = ";
	int bil;
	cin >> bil;
	
	int ribuan = bil/1000;
	bil = bil%1000;
	cout << "Ribuan = " << ribuan << '\n';

	int ratusan = bil/100;
	bil = bil%100;
	cout << "Ratusan = " << ratusan << '\n';
	
	int puluhan = bil/10;
	bil = bil%10;
	cout << "Puluhan = " << puluhan << '\n';
	
	int satuan = bil/1;
	bil = bil%1;
	cout << "Satuan = " << satuan << '\n';
	
	cout << "Terbilang = ";
	
	if (ribuan == 1)
		cout <<"Seribu ";
	else if (ribuan > 1)
		cout << arr[ribuan] << " Ribu ";
	
	if (ratusan == 1)
		cout <<"Seratus ";
	else if (ratusan > 1)
		cout << arr[ratusan] << " Ratus ";
		
	if (puluhan == 1) //10, 11, 12 s/d 19
	{
		if (satuan == 0)	
			cout << " Sepuluh ";
		else if (satuan == 1)	
			cout << " Sebelas ";
		else if (satuan > 1)	
			cout << arr[satuan] << " Belas ";
	}
	else if (puluhan > 1)
		cout << arr[puluhan] << " Puluh ";
		
	//satuan
	if (puluhan != 1)
		cout << arr[satuan];
}
