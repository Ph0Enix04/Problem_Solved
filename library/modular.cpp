ll binexpo(ll a, ll b, ll mod)
{
	ll res = 1;
	a%=mod;
	while(b>0)
	{
		if(b%2==1)
		{
			res = (res*a)%mod;
		}
		a = (a*a)%mod;
		b/=2;
	}
	return res;
}
ll modinverse(ll a, ll mod)
{
	return binexpo(a, mod-2, mod);
}
