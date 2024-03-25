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
		vector<ll>v(n);
		for(int i = 0; i < n; i++)
		{
			cin >> v[i];
		}
		vector<ll>temp(n);
		memset(a, 0, n);
		temp = v;
		sort(temp.rbegin(), temp.rend());
		int x = 1;
		for( int i = 0; i < n; i++)
		{
			if(a[temp[i]]==0)
			{
				a[temp[i]] = x;
			}
			x++;
		}
		for(int i = 0; i < n; i++)
		{
			cout << a[v[i]] << " ";
		}
		cout << endl;

	}
}