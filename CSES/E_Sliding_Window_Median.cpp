#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template <typename T> using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
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
#define ll long long
#define endl '\n'
const unsigned int MX = 1000000007;
//ll gcd(ll A, ll B) { return __gcd(A, B); }
//ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }
 
void solve() 
{
	ll n, k; cin >> n >> k;
	ordered_set<ll>st;
	vector<ll>v(n);
	for(auto &x: v) cin >> x;
	vector<ll>ans;
	for(int i = 0; i < k; i++) st.insert(v[i]);
	ll pos = k/2;
	ans.push_back(*st.find_by_order(pos));
	for(int i = k, j = 0; i < n; i++, j++)
	{
		for(auto u: ans) cout << u << " ";
		cout << endl;
		cout << *st.find(v[j]) << " " << endl;
		st.erase(st.find(v[j]));
		st.insert(v[i]);
		ans.push_back(*st.find_by_order(pos));
	}
	for(auto &x: ans) cout << x << " ";
}
 
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll TC = 1;
	//cin >> TC;
    while (TC--) 
    {
        solve();
    }
}
