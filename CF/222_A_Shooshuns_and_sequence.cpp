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
		ll n, k; cin >> n >> k;
		k--;
		vector<ll>v(n);
		bool flag = false;
		for(int i = 0; i < n; i++)
		{
			cin>>v[i];
		}
		ll x = v[k];
		for(int i = k+1; i < n; i++)
		{
			if(x!=v[i])
			{
				flag = true;
			}
		}
		ll count = 0;
		if(flag)
		{
			cout << -1 << endl;
			return 0;
		}
		else
		{
			for(int i = 0; i < k; i++)
			{
				if(x!=v[i])
				{
					count = i+1;
				}
			}
		}
		cout << count << endl;

	}
}