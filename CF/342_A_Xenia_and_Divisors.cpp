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
		ll one=0, two=0, three=0, four=0, six=0;
		vector < int>v;
		for(int i = 1; i<=n; i++)
		{
			cin >> a[i];
			if(a[i]==1)
			{
				one++;
			}
			else if(a[i]==2)
			{
				two++;
			}
			else if(a[i]==3)
			{
				three++;
			}
			else if(a[i]==4)
			{
				four++;
			}
			else if(a[i]==6)
			{
				six++;
			}
			if((a[i]==5 || a[i]==7) || n%3!=0)
			{
				break;
			}

		}
		if(one+two+three+four+six != n)
		{
			cout << -1 << endl;
			return 0;
		}
		for(int i = 0; i< n/3; i++)
		{
			if(one && two && four)
			{
				v.push_back(1);
				v.push_back(2);
				v.push_back(4);
				one--;
				two--;
				four--;
			}
			else if(one && two && six)
			{
				v.push_back(1);
				v.push_back(2);
				v.push_back(6);
				one--;
				two--;
				six--;
			}
			else if(one && three  && six)
			{
				v.push_back(1);
				v.push_back(3);
				v.push_back(6);
				one--;
				three--;
				six--;
			}
			else
			{
				cout << -1 << endl;
				return 0;
			}
		}
		for(int i = 0; i < n; i+=3)
		{
			cout << v[i] << " " << v[i+1] << " " << v[i+2] << endl;
		}
	}

}