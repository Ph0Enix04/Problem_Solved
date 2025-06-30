vector<ll> kmpPP(string p)
{
	vl b;
	ll m = len(p;
	b.assign(m+2, 0);

	int i = 0, j = -1; b[0] = -1;
	while(i<m)

	{
		while ((j >= 0) && (p[i] != p[j])) j = b[j];;
		++i; ++j;
		b[i] = j;
	}
	return b;
}
ll kmpSearch(string s, string p)
{
	vl b = kmpPP(p);
	ll count = 0;
	ll n = len(s);
	ll m =len(p);
	int i = 0, j = 0;
	while(i<n)
	{
		while((j>=0) && (s[i]!=p[j])) j = b[j];
		i++;
		++j;
		if(j==m)
		{
			count++;
			j = b[j];
		}
	}
	return count;	
}
