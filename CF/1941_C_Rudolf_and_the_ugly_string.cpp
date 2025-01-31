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
		string s; cin >> s;
		ll count = 0;
		for(int i = 0; i+2 < n; i++)
		{
			auto w = s.substr(i, 3);
			if(w=="map" || w=="pie")
			{
				count+=1;
				i+=2;
			}
		}
		cout << count << endl;
	}
}