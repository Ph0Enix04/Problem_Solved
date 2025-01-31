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
		ll sum = 0;

		vector<ll>v(n);
		for(int i = 0; i < n; i++)
		{
			cin >> v[i];
			sum+=v[i];
		}
		sort(v.rbegin(), v.rend());
		ll count = 0, temp = 0;
		sum = sum/2;
		for(int i = 0; i < n; i++)
		{
			if(temp > sum)
			{
				break;
			}
			temp+=v[i];
			count++;
		}
		cout << count << endl;
	}
}