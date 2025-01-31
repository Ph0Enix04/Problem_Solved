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
		ll n; cin >> n;
		vector<pair<ll, ll>>v;
		for(int i = 0; i < n; i++)
		{
			ll x, y;
			cin >> x >> y;
			v.push_back(make_pair(x, y));
		}
		bool flag = false;
		sort(v.begin(), v.end());
		for(int i =1; i < n; i++)
		{
			if(v[i].first > v[i-1].first && v[i].second < v[i-1].second)
			{
				flag = true;
			}
		}
		if(flag)
			cout << "Happy Alex" << endl;
		else
			cout << "Poor Alex" << endl;
	}
}