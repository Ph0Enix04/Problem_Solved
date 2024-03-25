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
		for(int i = 0; i < s.size(); i++)
		{
			char x = '9' - s[i] + '0';
			if(i == 0 && x == '0')
			{
				continue;
			}
			else if(x < s[i])
			{
				s[i] = x;
			}
			{

			}
		}
		
		cout << s << endl;
	}
}