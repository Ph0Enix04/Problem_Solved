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
		
		ll x, y, z; cin >> x >> y >> z;
		ll res1, res2, res3, res4;
		vector<ll>v;
		res1 = x+y+z;
		v.push_back(res1);
		res2 = x*y*z;
		v.push_back(res2);
		res3 = (x+y)*z;
		v.push_back(res3);
		res4 = x*(y+z);
		v.push_back(res4);
 
		sort(v.rbegin(), v.rend());
		cout << v[0] << endl;
 
 
	}
}