#include<bits/stdc++.h>
using namespace std;

int main()
{
	map<string, int>mp;

	int n;
	cin >> n;
	string winner;
	int index = INT_MIN;

	for(int i = 0; i < n; i++)
	{
		string x;
		cin >> x;

		mp[x]++;
	}
	for(auto u : mp)
	{
		if(u.second > index)
		{
			index = u.second;
			winner = u.first;
		}
	}
	cout << winner << endl;
}