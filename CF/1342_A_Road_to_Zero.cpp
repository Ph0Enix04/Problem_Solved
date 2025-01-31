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
		ll x, y; cin >> x >> y;
		ll a, b; cin >> a >> b;
		ll komvalue = min(x, y);
		ll beshivalue = max(x, y);

		ll ektauttor = (x*a) + (y*a);
		ll arektauttor = (komvalue * b) + (beshivalue - komvalue) * a;
		ll finaluttor = min(ektauttor, arektauttor);
		cout << finaluttor << endl;
	}
}