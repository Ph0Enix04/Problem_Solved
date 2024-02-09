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
		ll maxD=INT_MIN, index;
		ll n; cin >> n;
		vector<pair<ll, ll>>v;
		ll first,second;
		bool flag = false;
		for(int i = 0; i < n; i++)
		{
			ll x, y;
			cin >> x >> y;
			v.push_back(make_pair(x, y));
		}
		for(int i = 0; i < n; i++)
		{
			if((v[i].second-v[i].first)>maxD)
			{
				maxD = v[i].second - v[i].first;
				index = i+1;
				first = v[i].first;
				second = v[i].second;
			}
		}
		for(int i = 0; i < n; i++)
		{
			if((v[i].second-v[i].first)==maxD&&(v[i].first!=first || v[i].second!=second))
			{
				flag = true;
			}
		}
		for(int i = 0; i < n; i++)
		{
			if(v[i].first < first || v[i].second >second)
			{
				flag = true;
			}
		}
		if(flag)
		{
			cout << -1 << endl;
		}
		else
			cout << index << endl;
	}
}