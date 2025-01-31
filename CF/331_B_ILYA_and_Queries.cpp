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
		string s;
		cin >> s;
		ll x = 0;
		for(int i = 1; i < s.size(); i++)
		{
			if(s[i]==s[i-1])
				x++;
			a[i] = x;
		}
		ll n; cin >> n;
		while(n--)
		{
			ll o, p;
			cin >> o >> p;
			o--;
			p--;
			cout << a[p] - a[o] << endl;
		}
	}
}