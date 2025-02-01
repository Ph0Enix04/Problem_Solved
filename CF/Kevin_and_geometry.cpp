//B. Kevin and Geometry
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
//ordered_set---
 
void solve() 
{
	ll n; cin >> n;
	map<ll, ll>mp;
	for(int i = 0; i < n; i++)
	{
		ll x; cin >> x;
		mp[x]++;
	}
	vector<ll>two, one;
	for(auto[key, value]: mp)
	{
		if(value>=4)
		{
			two.push_back(key);
			two.push_back(key);
		}
		else if(value==3)
		{
			two.push_back(key);
			one.push_back(key);
		}
		else if(value==2)two.push_back(key);
		else one.push_back(key);
	}
	if(two.size()>=2)
	{
		cout << two[0] << " " << two[0] << " " << two[1] << " " << two[1] << endl;
		return;
	}
	else if(two.empty())
	{
		cout << -1 << endl;
		return;
	}
	sort(one.begin(), one.end());
	int c = two[0];
	for(int i = 1; i<(int)one.size(); i++)
	{
		int a = one[i-1];
		int b = one[i];
		int val = abs(a-b);
		if(val<(2*c))
		{
			cout << c << " " << c << " " << a << " " << b << endl;
			return;
		}
	}
	cout << -1 << endl;
	
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
