#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
const int mx = 8e6+123;
int a[mx];
void sieve_of_eratosthenes(int n)
{
    bool is_prime[mx + 1];
    memset(is_prime, true, sizeof(is_prime));
    is_prime[0] = is_prime[1] = false;
    for (int p = 2; p * p <= mx; p++) {
        if (is_prime[p]) {
            for (int i = p * p; i <= mx; i += p) {
                is_prime[i] = false;
            }
        }
    }
    ll i = 0, j = 0;
    	for(;i!=n;j++)
    	{
    		if(is_prime[j])
    		{
    			cout << j << " ";
    			i++;
    		}
    	}
}
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	ll t = 1;
	//cin >> t;
	while(t--)
	{
		ll n;
		cin >> n;

		sieve_of_eratosthenes(n);
	}
}