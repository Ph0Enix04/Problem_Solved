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
        ll n, k;cin >> n >> k;
        double result = 0;
        ll x, y;
        cin >> x >> y;
        n--;
        if(!n)
        {
            cout << 0.000000000 << endl;
            return 0;
        }
        while(n--)
        {
            ll x1, y1; cin >> x1 >> y1;
            result += sqrt((x1-x)*(x1-x) +  (y1 - y)*(y1 - y));
            x = x1;
            y = y1;

        }
        cout << fixed << setprecision(9) << (result / 50)*k << endl;
    }
}
