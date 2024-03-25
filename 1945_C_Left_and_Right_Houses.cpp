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
		string s; cin >> s;
		vector<ll>pre(n+1), suf(n+1);
		for(int i = 0; i < n; i++)
		{
			pre[i+1] = pre[i] + (s[i] == '0' ? 1: -1);
		} 
		for(int i = n-1; i >=0; i--)
		{
			suf[i] = suf[i+1] + (s[i] == '1' ? 1: -1);
		}
		ll ans = 0, d= 4 * n;
		for(int i = 0; i <= n; i++)
		{
			if(pre[i] >= 0 and suf[i] >=0)
			{
				ll dd = abs(2*i - n);
				if(dd < d)
				{
					ans = i;
					d = dd;
				}
			}
		}
		cout << ans << endl;
	}
}