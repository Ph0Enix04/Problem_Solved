#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
const int mx = 2e5+123;
char a[mx];
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	ll t = 1;
	cin >> t;
	while(t--)
	{
		ll n; cin >> n;
		char a[mx];
		fill(a, a+mx, 'a')
		for(int i = 0; i < n; i++)
		{
			ll x; cin >> x;
			cout << a[x];
			a[x]++;
		}
		cout << endl;
	}
}