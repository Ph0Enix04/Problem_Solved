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
        if(n%4 == 0  || n % 7 == 0 || n%47 == 0 || n%74 == 0 || n%477==0)
        {
        	yes
        }
        else
        	no
    }
}
