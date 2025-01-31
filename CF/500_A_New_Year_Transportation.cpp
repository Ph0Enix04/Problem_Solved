#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
const int mx = 2e5+123;
int v[mx];
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	ll t = 1;
	//cin >> t;
	while(t--)
	{
		ll n, k;
		cin >> n >> k;
		for(int i = 1; i <= n; i++)
		{
			cin >> v[i];
		}
		bool flag = false;
		for(int i = 1; i <= n;)
		{
			if(i==k)
			{
				flag = true;
				break;
			}
			else if(i>k)
			{
				break;
			}
			i+=v[i];
		}
		if(flag)
			yes
		else
			no
	}
}