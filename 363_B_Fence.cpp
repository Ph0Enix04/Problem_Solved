#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
const int mx = 2e5+123;
int a[mx];
int sum[mx];
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	ll t = 1;
	//cin >> t;
	while(t--)
	{
		ll max = INT_MAX, value;
		ll n, k; cin >> n >> k;
		for(int i = 1; i <= n; i++)
		{
			cin >> a[i];
			sum[i] = a[i] + sum[i-1];
		}
		for(int i = k, j = 0; i <= n; i++,j++)
		{
			if((sum[i]-sum[j])<max)
			{
				max = sum[i]-sum[j];
				value = j+1;
			}
		}
		cout << value << endl;

	}
}