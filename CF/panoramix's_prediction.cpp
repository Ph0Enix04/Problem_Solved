#include <bits/stdc++.h>
using namespace std;

bool isprime(int n);
int main()
{
    int n, m;
    cin >> n >> m;
    int i = 0;
    if(isprime(m))
    {
        for(i = n+1; i <= m+1; i++)
        {   if(isprime(i) && i < m)
            {
                cout << "NO" << endl;
            }
            else if(isprime(i) &&(i == m))
            {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
}

bool isprime(int n){
    if(n <= 1)
    {
        return false;
    }
    for(int i =2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
}