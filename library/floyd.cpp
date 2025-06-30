
void floyd()
{
	for(int k = 0; k < n; k++)
	{
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < n; j++)
			{
				if(adj[i][k]<INF && adj[k][j]<INF)
					adj[i][j] = min(adj[i][j], adj[i][k]+adj[k][j]);
			}
		}
	}
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			for(int k = 0;k < n; k++)
			{
				if(adj[i][j]==-INF)break;
				if(adj[k][k]<0 && adj[i][k]!=INF && adj[k][j] !=INF)
					adj[i][j] = -INF;
			}
		}
	}
}
