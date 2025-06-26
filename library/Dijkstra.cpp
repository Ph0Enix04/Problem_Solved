vector<vii>adj;
vector<ll>dist;
void dijkstra(ll s)
{
	priority_queue<ii, vii, greater<ii>>pq;
	dist[s] = 0;
	pq.push({0, s});
	while(!pq.empty())
	{
		auto [d, u] = pq.top();
		pq.pop();
		if(d>dist[u])continue;
		for(auto [v, cst]: adj[u])
		{
			if(dist[u]+cst<dist[v])
			{
				dist[v] = dist[u]+cst;
				pq.push({dist[v], v});
			}
		}
	}
}
