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
		for(int i =0; i < n; i++)
		{
			cin >> v[i];
		}
		bool flag = false;
		for(int i = 1; i <n-1; i++)
		{
			if(2*v[i-1] > v[i])
			{
				flag = true;
				break;
			}
			else
			{
				ll res = min(v[i-1], v[i+1]);
				v[i-1] = v[i-1] - res;
				v[i] -= (2*res);
				v[i+1] -= res;
			}
		}
		sort(v.begin(), v.end());
		if(v[0]!=0 or v[n-1]!=0)
			flag = true;
		if(flag)
			no
		else
			yes
	}
}