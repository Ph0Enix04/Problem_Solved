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
		ll n, m, k; cin >> n >> m >> k;
		set<ll>st, stl, str;
		for(int i = 0; i < n; i++)
		{
			ll x; cin >> x;
			st.insert(x);
			stl.insert(x);
		}
		for(int i = 0; i < m ; i++)
		{
			ll x; cin >> x;
			st.insert(x);
			str.insert(x);
		}
		ll left=0, right=0;
		set<ll>::iterator it1 = stl.begin();
		while(*it1<=k or it1 < stl.end())
		{
			left++;
			it1++;
		}
		set<ll>::iterator it2 = str.begin();
		while(*it2 <=k or it2 <str.end())
		{
			right++;
			it2++;
		}
		bool flag = false;
		ll man = 1;
		set<ll>::iterator it = st.begin();
		for(int i = 0; i < k; i++)
		{
			if(*it != man)
			{
				flag = true;
				break;
			}
			man++;
			it++;
		}
		if(left < k/2 or right < k/2)
		{
			flag = true;
		}
		if(flag)
			no
		else
			yes
	}
}