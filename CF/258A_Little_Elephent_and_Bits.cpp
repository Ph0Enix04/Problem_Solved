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
		string s;
		cin >> s;
		ll zero=0;
		bool flag = false;
		for(int i = 0; i < s.size();i++)
		{
			if(s[i]=='0')
				zero++;
		}
		if(!zero)
		{
			for(int i = 1; i < s.size(); i++)
			{
				cout << s[i];
			}
		}
		else
		{
			for(int i = 0; i < s.size(); i++)
			{
				if(s[i]=='0' && !flag)
				{
						flag = true;
				}
				else
				{
					cout << s[i];

				}
			}
		}
	}
		
}