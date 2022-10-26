#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int sum = 0;
	int ukuran;
	cin >> ukuran;
	int a;
	vector<int> v;
	
	for (int i = 0; i < ukuran; i++)
	{
		cin >> a;
		v.push_back(a);
	}
	
	for (int k = 0; k < v.size(); k++)
	{
	    if(v[k] < 0)
	    {
	        v[k] = v[k] * (-1);
	    }
	
	    sum += v[k];
	}
	
	cout << sum;
	
	return 0;
}








/*
int main()
{
    vector<int> arr;
    int a;
    while (cin >> a)
    {
		arr.push_back(a);  //ini akan ngambil input integers dari user dan dimasukkin ke a. kalo ketemu decimal otomatis break.
    }
    
	for (auto &data : arr)
		cout << data;
	//ini sebener e bisa, cuma [Error] range-based 'for' loops are not allowed in C++98 mode
	//untuk ngeprint semua values yg ada di vector arr
		
	for (int i = 0; i < arr.size(); i++)
	{
	    if(arr[i] < 0)
	    {
	        arr[i] = arr[i] * -1;
	    }
	
	    cout << arr[i] << " ";
	}
	

    return 0;
}
*/
