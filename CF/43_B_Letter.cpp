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
		map<char, ll>mp;
		string s1, s2;
		getline(cin, s1);
		getline(cin, s2);
		bool flag = false;
		for(int i = 0; i < s1.size(); i++)
		{
			mp[s1[i]]++;
		}
		for(int i = 0; i < s2.size(); i++)
		{
			if(mp[s2[i]])
			{
				mp[s2[i]]--;
			}
			else if(s2[i]!=' ')
			{
				flag = true;
			}
		}
		if(flag)
		{
			no
		}
		else
		{
			yes
		}
	}
}