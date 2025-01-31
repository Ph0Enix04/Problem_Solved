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
		ll final = -1, temp = 1;
		for(int i = 1; i <=n; i++)
		{
			cin >> a[i];
		}
		for(int i = 2; i <= n; i++)
		{
			if(a[i]>=a[i-1])
			{
				temp++;
			}
			else
			{
				final = max(final, temp);
				temp = 1;
			}
		}
		final = max(final, temp);
		cout << final << endl;
	}
}