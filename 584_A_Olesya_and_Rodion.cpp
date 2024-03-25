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
		ll count=0;
		memset(a, 0, n+1);
		for(int i = 1; i <=n; i++)
		{
			cin >> a[i];
		}
		for(int i = 1; i <=n; i++)
		{
			for(int j = i+1; j<=n; j++)
			{
				if(a[j] - a[i] == j - i)
					count++;
			}
		}
		cout << count << endl;
	}
}