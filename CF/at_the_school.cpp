#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main()
{
    optimize();
    int n, t;
    cin >> n >> t;
    string s;
    cin>>s;
    while(t--)
    {
        for(int i = 0; i < n; i++)
        {
            if(s[i] =='B' && s[i + 1] =='G')
            {
                s[i] = 'G';
                s[i + 1] = 'B';
                i++;
            }
        }
    }
    cout<<s;
}