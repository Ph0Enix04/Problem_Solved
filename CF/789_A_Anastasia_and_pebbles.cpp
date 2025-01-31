#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	ll t = 1;
	//cin >> t;
	ll sum{0};
	while(t--)
	{
		ll n,k; cin >> n >> k;
		vector<ll>v(n);
		for(int i = 0; i < n; i++)
		{
			cin >> v[i];
			if(v[i]%k==0)
			{
				sum+=v[i]/k;
			}
			else
			{
				sum+=v[i]/k+1;
			}
		}
		if(sum%2==0)
		{
			cout << sum/2 << endl;
		}
		else
		{
			cout << sum/2+1 << endl;
		}
	}	
}