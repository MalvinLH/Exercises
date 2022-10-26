#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int r;
	cout << "Masukkan jari-jari lingkaran (radius of the circle) = ";
	cin >> r;
	
	float luas_persegi_kecil = pow((r + r) / sqrt(2), 2);
	cout << "Luas persegi kecil = " << luas_persegi_kecil << '\n';
	
	int luas_persegi_besar = pow((r + r), 2);
	cout << "Luas persegi besar = " << luas_persegi_besar << '\n';
	
	int selisih_luas_kedua_persegi = luas_persegi_besar - luas_persegi_kecil;
	cout << "Selisih luas kedua persegi tersebut = " << selisih_luas_kedua_persegi;
	
	return 0;
}
