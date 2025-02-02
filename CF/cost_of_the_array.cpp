//Cost of the Array

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
const long long INF = 1000000000000000000ll;
typedef pair<int, int>ii;
typedef vector<int>vi;
typedef vector<ii> vii;
struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};
int dx[] = {-1,1, 0, 0, -1,-1, 1, 1};
int dy[] = {0, 0, -1, 1, -1, 1, -1, 1};
const unsigned int MX = 1000000007;
//ll gcd(ll A, ll B) { return __gcd(A, B); }
//ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }
// DSU---topSort---floyd--cycleCheck
//ordered_set---KMP---
 
void solve() 
{
	ll n, k; cin >> n >> k;
	vector<ll>v(n);
	for(int i = 0; i < n; i++)
		cin >> v[i];
	ll curr = 1;
	if(n==k)
	{
		for(int i = 1; i < n; i+=2)
		{
			if(v[i]!=curr)break;
			curr++;
		}
		cout << curr << endl;
	}
	else
	{
		bool flag = false;
		for(int i = 1; i <= (n-k+1); i++)
		{
			if(v[i]!=1)flag = true;
		}
		curr = (flag ? 1:2);
		cout << curr << endl;
	}

}
 
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll TC = 1;
	cin >> TC;
    while (TC--) 
    {
        solve();
    }
}
