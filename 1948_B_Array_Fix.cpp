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
		vector<ll>v1(n);
		for(int i = 0; i < n; i++)
		{
			cin >> v1[i];
		}
		bool flag = true;
		ll last = v1.back();
		for(int i = n-2; i >= 0; i--)
		{
			if(v1[i] > last)
			{
				if(v1[i] < 10)
				{
					flag = false;
					break;
				}
				ll x = v1[i] / 10;
				ll y = v1[i] %10;
				if(x>y or y>last)
				{
					flag = false;
					break;
				}
				last = x;
			}
			else
			{
				last = v1[i];
			}
		}
		if(flag)
			yes
		else
			no

	}
}