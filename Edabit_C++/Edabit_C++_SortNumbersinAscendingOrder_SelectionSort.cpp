#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int size, a, temp;
	vector<int> arr;
	
	cout << "Input your desired vector size = ";
	cin >> size;
	
	//for loop untuk memasukkan angka-angka ke dalam vector dgn jumlah yg sesuai size yg diinputkan user.
	for(int i = 0; i < size; i++)
	{
		cin >> a;
		arr.push_back(a);
	}
	
	//for loops untuk men-sort vector dari terkecil ke terbesar menggunakan metode selection sort.
	for(int j = 0; j < arr.size()-1; j++)
	{
		for(int k = j + 1; k < arr.size(); k++)
		{
			if(arr[j] > arr[k])
			{
				temp = arr[k];
				arr[k] = arr[j];
				arr[j] = temp;
			}
		}
		
		cout << endl;
		cout << "tahap " << j + 1 << " = ";
		for(int a = 0; a < arr.size(); a++)
			cout << arr[a] << " ";
	}
	cout << endl << endl;
	
	//for loop untuk print hasil sorted vectors-nya.
	cout << "Hasil = ";
	for(int c = 0; c < arr.size(); c++)
		cout << arr[c] << " ";
}
