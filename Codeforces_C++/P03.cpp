//https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P03

#include <iostream>
using namespace std;

int main()
{
	int lines;
	cin >> lines;
	
	string words[lines];
	for(int i = 0; i < lines; i++)
		cin >> words[i];
 	
	for(int j = 0; j < lines; j++)
	{
		if(words[j].size() > 10)
		{
			int n = words[j].size();
			cout << words[j][0] << n - 2 << words[j][n - 1] << '\n';
		}
		else
			cout << words[j] << '\n';
	}
	
	return 0;
}
