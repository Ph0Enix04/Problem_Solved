#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

bool pallindrome(string s);
int main()
{
    optimize();
    int n;
    string arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++)
    {
        if(pallindrome(arr[i]))
        {
            cout<< "YES" <<  endl;
        }else
        {
            cout << "NO" << endl;
        }
    }
}
bool pallindrome(string s)
{
    string tmp;
    tmp = s;
    reverse(tmp.begin(), tmp.end());
    if(s == tmp)
    {
        return true;
    }
    return false;
}