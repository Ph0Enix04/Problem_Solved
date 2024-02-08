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
		ll n, m; cin >> n >> m;
		vector<ll>v(n);
		ll count =0;
		for(int i = 0; i < n; i++)
		{
			cin >> v[i];
		}

		for(int i = 1; i < n; i++)
		{
			if(v[i]- v[i-1] <= m && count==0)
			{
				count+=2;
			}
			else if(v[i]-v[i-1] <=m)
			{
				count++;
			}
			else
			{
				count=0;
			}
		}
		if(count==0)
		{
			cout << 1 << endl;
			return 0;
		}
		cout << count << endl;
	}
}