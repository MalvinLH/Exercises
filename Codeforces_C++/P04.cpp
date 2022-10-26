https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P04

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	string w1, w2;
	cin >> w1 >> w2;
	
	transform(w1.begin(), w1.end(), w1.begin(), ::toupper); //transform(Iterator inputBegin, Iterator inputEnd, Iterator OutputBegin, unary_operation) 
	transform(w2.begin(), w2.end(), w2.begin(), ::toupper); //source for transform = https://www.geeksforgeeks.org/transform-c-stl-perform-operation-elements/

	if(w1 == w2)
		cout << "0";
	if(w1 < w2)
		cout << "-1";
	if(w2 < w1)
		cout << "1";
	
	return 0;
}
