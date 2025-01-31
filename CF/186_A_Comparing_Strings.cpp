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
		string s1, s2;
		cin >> s1 >> s2;
		map<char, ll>mp1, mp2;
		ll count = 0;
		if(s1.size()!=s2.size())
		{
			no
			return 0;
		}
		bool flag = false;
		for(int i = 0; i < s1.size();i++)
		{
			mp1[s1[i]]++;
			mp2[s2[i]]++;

		}
		for(int i = 0; i < s1.size();i++)
		{
			if(mp1[s1[i]]!=mp2[s1[i]])
			{
				flag = true;
				break;
			}
		}
		if(flag)
		{
			no
			return 0;
		}
		for(int i = 0; i < s1.size(); i++)
		{
			if(s1[i]!=s2[i])
			{
				count++;
			}
		}
		if(count>2)
		{
			no
		}
		else
		{
			yes
		}
	}
}