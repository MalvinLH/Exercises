#include <iostream>
#include <string>
using namespace std;

int main()
{
	string arr[2];
	arr[0] = "Genap";
	arr[1] = "Ganjil";
	
	cout << "Bilangan = ";
	int bil;
	cin >> bil;
	
	cout << arr[bil%2];
}
