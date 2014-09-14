#include <iostream>
#include <cstdio>
using namespace std;


int extended_euclid(int a, int b, int& u, int &v)
{
	if (b == 0)
	{
		u = 1;
		v = 0;
		return a;
	}

	int q = a / b;
	int r = a % b;

	int u1, v1;

	int d = extended_euclid(b, r, u1, v1);
	
	u = v1;
	v = u1 - q*v1;

	return d;	
}


int main()
{
	int a, b;

	cin >> a>> b;

	int u, v;
	int d = extended_euclid(a, b, u, v);	

	printf("%d = %d * %d + %d * %d \n", d, u, a, v, b);
	return 0;
}