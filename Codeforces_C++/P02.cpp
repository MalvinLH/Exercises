//https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P02

#include <iostream>
using namespace std;

int main()
{
	int kids;
	cin >> kids;
	
	int arr[kids];
	for(int i = 0; i < kids; i++)
		cin >> arr[i];
		
	int m, n, sum = 0;
	cin >> m >> n;
	for(int j = m; j <= n; j++)
		sum += arr[j];
	cout << sum;
	
	return 0;
}
