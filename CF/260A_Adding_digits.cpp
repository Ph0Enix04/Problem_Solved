#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a, b , n; cin >> a >> b>> n;
	string s;

	for(int i = 0; i <= 9; i++)
	{
		s = to_string(a);
		s+=to_string(i);
		int x = stoi(s);
		if(x%b == 0)
		{
			s = to_string(x);
			for(int j = 0; j < n-1; j++)
			{
				s+='0';
			}
			cout << s << endl;
			return 0;
		}

	}
	cout << -1 << endl;

}