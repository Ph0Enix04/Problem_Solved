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
		ll n; cin >> n;
		stack<char>st;
		ll  op = 0;
		for(int i = 0; i < n; i++)
		{
			char x; cin >> x;
			if(x=='(')
			{
				op++;
				st.push(x);
			}
			else if(x==')' && op>0)
			{
				st.pop();
				op--;
			}
			else
			{
				st.push(x);
			}
		}
		cout << st.size()/2 << endl;

	}
}