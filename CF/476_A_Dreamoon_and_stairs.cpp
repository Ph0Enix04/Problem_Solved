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
		if(n <m)
		{
			cout << -1 << endl;
			return 0;
		}
		ll res;
		if(n%2==0)
			res = n/2;
		else
			res = n/2+1;
		
		while(1)
		{
			if(res%m==0)
				break;
			else if(res > n)
			{
				cout << -1 << endl;
				return 0;
			}
			else
			{
				res++;
			}
		}	
		cout << res << endl;
	}
}