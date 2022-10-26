//https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P06
//program ini cuma bisa untuk angka dibawah 10

#include <iostream>
using namespace std;

int main()
{
	string num;
	cin >> num;
	int sum = 0, temp;
	
	for(int i = 0; i < num.size() - 1;)
	{
		for(int j = i + 2; j < num.size();)
		{
			if(num[i] > num[j])
			{
				temp = num[j];
				num[j] = num[i];
				num[i] = temp;
			}
			j = j + 2;
		}
		
		cout << '\n';
		for(int a = 0; a < num.size(); a++)
			cout << num[a];
		
		i = i + 2;
	}
	
	cout << "\n\nHasil = ";
	for(int c = 0; c < num.size(); c++)
		cout << num[c];
		
	return 0;
}
