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
		ll y, k, n;
		cin >> y >> k >> n;
		int j  = 1;
		ll value = 0;
		vector<ll>v;
		while((value<=n))
		{
			ll x = j*k-y;
			value = j*k;
			if(value<=n && x>=1)
			{
				v.push_back(x);
			}
			j++;
		}
		if(v.empty())
		{
			cout << -1 << endl;
		}
		else
		{
			for(auto it : v)
			{
				cout << it << " ";
			}
		}
	}
}