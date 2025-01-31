//8 Queens Chess Problem

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
int row[8], a, b,  lc;
bool canPlace(int r, int c)
{
	for(int prev = 0; prev<c; ++prev)
	{
		if(row[prev]==r || (abs(row[prev]-r)==abs(prev-c)))
			return false;
	}
	return true;
}
void backtrack(int c)
{
	if((c==8) && (row[b]==a))
	{
		printf("%2d      %d", ++lc, row[0]+1);
    	for (int j = 1; j < 8; ++j) printf(" %d", row[j]+1);
    	printf("\n");
		return;
	}
	for(int r = 0; r < 8; ++r)
	{
		if((c==b) && (r!=a))continue;
		if(canPlace(r, c))
			row[c] = r, backtrack(c+1);
	}
}
void solve() 
{
	scanf("%d %d", &a, &b);--a,--b;
	memset(row, 0, sizeof(row)); lc = 0;
	printf("SOLN       COLUMN\n");
    printf(" #      1 2 3 4 5 6 7 8\n\n");
	backtrack(0);
	
}
 
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int TC = 1;
	scanf("%d", &TC);
    while (TC--) 
    {
        solve();
		if(TC) printf("\n");
    }
}
