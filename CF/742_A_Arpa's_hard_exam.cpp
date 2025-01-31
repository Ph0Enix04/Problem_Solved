#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
const int mx = 2e5+123;
int a[mx];
long long power(long long A, long long B)
{
    if (B == 0)
        return 1;

    long long res = power(A, B / 2);

    if (B % 2)
        return (res * res * A)%10;
    else
        return (res * res)%10;
}
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	ll t = 1;
	//cin >> t;
	while(t--)
	{
		ll n; cin >> n;
		ll x = power(8, n);
		ll res = x % 10;
		cout << res << endl;
	}
}