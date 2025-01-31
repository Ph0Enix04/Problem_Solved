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
		unsigned ll a, b, m, count = 0;
		cin >> a >> b >>m;
		count = m/a + 1 + m/b + 1;
		cout << count << endl;

	}
}