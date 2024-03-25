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
		string s;cin >> s;
		bool flag = false;
		for(int i = 1; i < s.size(); i++)
		{
			if(islower(s[i]))
				flag = true;
		}
		if(!flag)
		{
			for(int i = 0; i < s.size(); i++)
			{
				if(islower(s[i]))
					s[i] = toupper(s[i]);
				else if(isupper(s[i]))
					s[i] = tolower(s[i]);
			}
		}
		cout << s << endl;
	}
}