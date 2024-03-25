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
		vector<ll>v(n);
		ll one=0, two=0, three=0, count=0;
		for(int i = 0; i < n; i++)
		{
			cin >> v[i];
			if(v[i]==1)
				one++;
			else if(v[i]==2)
				two++;
			else if(v[i]==3)
				three++;
			else
				count++;
		}
		while(one || two || three)
		{
			if(one && three)
			{
				one--;
				three--;
				count++;
			}
			else if(!one && three)
			{
				three--;
				count++;
			}
			if(two>=2)
			{
				two-=2;
				count++;
			}
			else if(two && one>=2)
			{
				two--;
				one-=2;
				count++;
			}
			else if(two && one ==1)
			{
				two--;
				one--;
				count++;
			}
			else if(two && !one)
			{
				count++;
				two--;
			}
			if(!two && !three && one)
			{
				count += ceil((float)one/4);

				one = 0;
			}
		}
		cout << count << endl;
	}
}