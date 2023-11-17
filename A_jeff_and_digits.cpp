#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin >> n;
	int f;

	for(int i = 0; i < n; i++)
	{
		int x; cin >> x;
		f += x == 5;
	}
	if(f == n)
	{
		cout << -1 << endl;
	}
	else
	{
		string maximum;
		int count = f / 9 * 9;
		while(count--) maximum+= '5';
		if(!maximum.empty())
		{
			int z = n - f - 1;
			while(z--)maximum+= '0';
		}
		maximum +='0';
		cout << maximum << endl;
	}
}