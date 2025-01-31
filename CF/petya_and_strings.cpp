#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{
    string s, t;
    int p = 1;
    int n = -1;
    int o = 0;
    cin >> s >> t;
    for(int i = 0; i < s.size(); i++)
    {
        s[i] = tolower(s[i]);
        t[i] = tolower(t[i]);
    }
    if(s < t) cout << "-1";
    else if(s > t) cout << "1";
    else cout << "0";
}