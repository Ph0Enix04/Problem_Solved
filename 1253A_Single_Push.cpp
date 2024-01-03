#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	ll t; cin >> t;
	while(t--)
	{
		ll n; cin >> n;
		vector<int>v1(n), v2(n);
		for(int i = 0; i < n; i++)
		{
			cin>>v1[i];
		}
		for(int i = 0; i < n; i++)
		{
			cin >> v2[i];
		}
		ll diff{0};
		bool flag = false;
		for(int i =0; i < n; i++)
		{
			if(v1[i]==v2[i] && !flag)
			{
				continue;
			}
			if(v1[i] != v2[i] && flag)
			{
				v1[i] = v1[i] - diff;
			}
			else if(v1[i]!=v2[i] && !flag)
			{
				diff=v1[i]-v2[i];
				if(diff>0)
				{
					break;
				}
				v1[i] = v1[i] - diff;
				flag=true;
			}
			else if(v1[i]==v2[i] && flag)
			{
				break;
			}
		}
		if(v1==v2)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" <<endl;
		}

	}
}