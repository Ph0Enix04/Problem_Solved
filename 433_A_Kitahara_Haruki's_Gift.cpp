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
		ll two=0, one=0;
		for(int i = 0; i < n; i++)
		{
			cin >> v[i];
			if(v[i] == 200)
			{
				two++;
			}
			else
			{
				one++;
			}
		}
		while(true)
		{
			if(one<=0 && two <=0)
			{
				break;
			}
			if(two>=2)
			{
				two-=2;
			}
			else if(two && one)
			{
				two--;
				one-=2;
			}
			else
			{
				one-=2;
			}
		}
		if(one ==0 && two == 0)
			yes
		else
			no
	}
}