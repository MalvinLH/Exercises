//https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P07

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	string w;
	cin >> w;
	string ns;
	
	transform(w.begin(), w.end(), w.begin(), ::tolower);
	
	for(int i = 0; i < w.size(); i++)
	{
		if(w[i] == 'a' || w[i] == 'o' || w[i] == 'y' || w[i] == 'e' || w[i] == 'u' || w[i] == 'i') 
			continue;
		ns += w[i];	
	}
	
	for(int j = 0; j < ns.size(); j++)
		cout << "." << ns[j];
		
	return 0;
}
