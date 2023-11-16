#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{
    optimize();
    int n;
    cin >> n;
    map<string, bool> v;

    cin >> n;
    while(n--)
    {
        string s;
        cin >> s;
        if(v[s] == 1)
        {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
        v[s];
    }

}