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
    	char c = *max_element(s.begin(), s.end());
    	for (int i = 0; i < s.size(); i++)
    	{
        	if (s[i] == c)
            	cout << s[i];
    	}

	}
}