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
		vector<ll>v1(n);
		for(int i = 0; i < n; i++)
		{
			cin >> v1[i];
		}
		ll m; cin >> m;
		vector<ll>v2(m);
		for(int i = 0; i <m; i++)
		{
			cin >> v2[i];
		}
		sort(v1.begin(), v1.end());
		sort(v2.begin(), v2.end());

		ll count = 0;
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < m; j++)
			{
				if(abs(v1[i] - v2[j]) <= 1 && v2[j] != -1)
				{
					count++;
					v2[j] = -1;
					break;
				}
			}
		}
		cout << count << endl;
	}
}