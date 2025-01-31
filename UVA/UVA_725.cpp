//Division

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
   bool first = true;
  int N;
  while (scanf("%d", &N), N) 
  {
    if (!first) printf("\n");
    first = false;
    bool noSolution = true;
   
	for (int fghij = 1234; fghij <= 98765/N; ++fghij) 
	{
      int abcde = fghij*N; 
      int tmp, used = (fghij < 10000); 
      tmp = abcde; while (tmp) { used |= 1<<(tmp%10); tmp /= 10; }
      tmp = fghij; while (tmp) { used |= 1<<(tmp%10); tmp /= 10; }
      if (used == (1<<10)-1) 
	  { 
        printf("%05d / %05d = %d\n", abcde, fghij, N);
        noSolution = false;
      }
    }
    if (noSolution) printf("There are no solutions for %d.\n", N);
  }
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
