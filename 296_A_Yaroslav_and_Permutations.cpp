#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
const int mx = 2e5+123;
int a[mx];
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	ll t = 1;
	//cin >> t;
	while(t--)
	{
		ll n;
		cin >> n;
		vector<ll>v(n);
		unordered_map<ll, ll>mp;
		for(int i  = 0; i < n; i++)
		{
			cin >> v[i];
			mp[v[i]]++;
		}
		ll koto = INT_MIN;
		ll konta = INT_MIN;
		for(auto i = mp.begin(); i !=mp.end(); i++)
		{
			if(i->second > koto)
			{
				konta = i->first;
				koto = i->second;
			}
		}
		ll count = 0;
		for(int i = 0; i < n; i++)
		{
			if(v[i]!=konta)
			{
				count++;
			}
		}
		if(count>= koto-1)
			yes
		else
			no
	}
}