#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;
	
	a = a % 10;
	cout << "\nLast digit of a = " << a << '\n';
	
	b = b % 10;
	cout << "Last digit of b = " << b << '\n';
	
	c = c % 10;
	cout << "Last digit of c = " << c << '\n';
	
	int result = a * b;
	cout << "\nResult 1 = " << result << '\n';
	if(result >= 10 || result <= -10)
		{
		result = result % 10;
		cout << "Result 2 = " << result << '\n';
		}
	
	if(result == c)
	{
		cout << "\ntrue";
		return true;
	}
	else
	{
		cout << "\nfalse";
		return false;
	}
	
	return 0;
}
