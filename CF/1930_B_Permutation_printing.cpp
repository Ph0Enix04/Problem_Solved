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
		ll l = 1, r = n;
		while(l<r)
		{
			cout << l << " " << r << " ";
			l++;
			r--;
		}
		
		cout << endl;
	}
}A