//ERROR
#include <bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
//using namespace __gnu_pbds;
//template <typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
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
const int N = 1e6+1;
vector<ll>adj[N+1];
int flag[N+2];
struct node
{
	ll name, dis, prev;
};
bool bfs(ll s, ll d, ll prev, ll n)
{
	vector<bool>visited(n+1, 0);
	bool res = true;
	node temp;
	temp.name = s;
	temp.dis = d;
	temp.prev = -1;
	queue<node>q;
	q.push(temp);
	while(!q.empty())
	{
		temp = q.front();
		q.pop();
		if(!visited[temp.name])flag[temp.name]++;
		if(flag[temp.name]!=1)
			res = false;
		visited[temp.name] = 1;
		if(temp.dis>0)
		{
			for(ll &u: adj[temp.name])
			{
				if(u==temp.prev) continue;

				node temp1;
				temp1.prev = temp.name;
				temp1.name = u;
				temp1.dis = temp.dis-1;
				q.push(temp1);
			}
		}
	}
	return res;

}
void solve() 
{
	ll n, r, m; cin >> n >> r >> m;
	for(int i = 0; i<=n; i++)
	{
		flag[i] = 0;
		adj[i].clear();
	}
	for(int i = 0; i < r; i++)
	{
		ll s, d; cin >> s >> d;
		adj[s].push_back(d);
		adj[d].push_back(s);
	}
	bool res = true;
	for(int i = 0; i < m; i++)
	{
		ll s, d;  cin >> s >> d;
		if(res)
		{
			res = bfs(s, d, -1, n);
		}
	}
	if(!res)
		cout << "NO" << endl;
	else
		cout << "YES" << endl;
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
