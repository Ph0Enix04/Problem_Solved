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
		vector<ll>v(n);
		for(int i = 0; i< n; i++)
		{
			cin >> v[i];
		}
		ll i = 0, j = n-1;
		ll first = v.front();
		ll last = v.back();
		for(; i < n; i++)
		{
			if(v[i]!=first)
				break;
		}
		if(i==n)
		{
			cout << 0 << endl;
			continue;      
		}
		for(; j>=0; j--)
		{
			if(v[j]!=last)
				break;
		}
		if(v[i-1] == v[j+1])
		{
			cout<< j - i+1 << endl;
		}
		else
		{
			j = n-j-1;
			ll res = max(i, j);
			cout << n - res << endl;
		}
		
	}
}