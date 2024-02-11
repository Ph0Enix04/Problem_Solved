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
		ll n, m;
		cin >> n >> m;
		ll min = INT_MAX, max = INT_MIN;
		vector<ll>c(n), w(m);
		for(int i = 0; i <n; i++)
		{
			cin >> c[i];
			if(c[i]>max)
				max = c[i];
			if(c[i]<min)
				min = c[i];
		}
		if(2*min>max)
		{
			max = 2*min;
		}
		bool flag = false;
		for(int i = 0; i < m; i++)
		{
			cin >> w[i];
			if(w[i]<=max)
				flag = true;
		}
		if(flag || 2*min>max)
			cout << -1 << endl;
		else
			cout << max << endl;
	}
}