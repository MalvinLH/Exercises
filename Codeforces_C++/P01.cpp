//https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P01

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int length;
	cin >> length;
	
	int arr[length];
	for(int i = 0; i < length; i++)
		cin >> arr[i];
	
	cout << '\n';
	
	for(int i = length - 1; i >= 0; i--)
		cout << arr[i] << " ";
		
	return 0;
}
