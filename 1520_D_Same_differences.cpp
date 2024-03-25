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
	cin >> t;
	while(t--)
	{
		ll n; cin >> n;
		map<ll, ll>mp;
		ll res = 0;
		for(int i = 0; i < n; i++)
		{
			ll x; cin >> x;
			x-=i;
			res+=mp[x];
			mp[x]++;
		}
		cout << res << endl;
	}
}