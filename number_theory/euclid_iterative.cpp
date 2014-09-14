#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a>> b;
	while (b)
	{
		a %= b;
		a ^= b;
		b ^= a;
		a ^= b;		
	}
	cout << a<< endl;
	return 0;
}