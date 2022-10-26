//https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P05

#include <iostream>
using namespace std;

int main()
{
	char num[100];
	int count1 = 0, count2 = 0;
	cin >> num;
	int howmany = sizeof(num)/sizeof(num[0]);
	
	for(int i = 0; i < howmany; i++)
	{
		if(num[i] == '0')
		{
			count2 = 0;
			count1++;
			if(count1 >= 7)
			{
				cout << "YES";
				break;
			}
		}
		
		if(num[i] == '1')
		{
			count1 = 0;
			count2++;
			if(count2 >= 7)
			{
				cout << "YES";
				break;
			}
		}
	}
	
	if(count1 < 7 && count2 < 7)
		cout << "NO";
	
	return 0;
}
