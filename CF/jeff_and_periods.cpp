#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;

ll m = 1000000007;

void solve() 
{
    map<int,vector<int>> indexes;
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) 
    {
        cin >> a[i];
        indexes[a[i]].push_back(i+1);
    }
    int cnt = 0;
    vector<vector<int>> ans;
    for(auto i = indexes.begin(); i !=indexes.end(); i++) 
    {
        vector<int> temp = i->second;
        if(temp.size() == 1) 
        {
            cnt++;
            ans.push_back({i->first, 0});
            continue;
        }
        int diff = temp[1] - temp[0];
        int flag = 0;
        for(int j = 1; j < temp.size(); j++) 
        {
            if(temp[j] - temp[j-1] != diff) 
            {
                flag = 1;
                break;
            }
        }
        if(!flag) {
            cnt++;
            ans.push_back({i->first, diff});
        }
    }
    cout << cnt << endl;
    for(int i = 0; i < ans.size(); i++)
        cout << ans[i][0] << " " << ans[i][1] << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        solve();
    }
}