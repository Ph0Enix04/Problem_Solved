#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	if(n == 1)
	{
		cout << 1 << endl;
		return;
	}
	cout << n << " ";
	for(int i = n-1; i > 0; i--)
	{
		cout << i < " ";
	}
	cout << endl;
}