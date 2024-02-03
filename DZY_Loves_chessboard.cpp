#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
const int mx = 2e5+123;
int a[mx];
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	ll t = 1;
	//cin >> t;
	while(t--)
	{
		int n, m;cin >> n >> m;
		char arr[n][m];
		for(int i = 0;i < n; i++)
		{
			for(int j = 0; j < m; j++)
			{
				cin >> arr[i][j];
				if(arr[i][j]=='.')
				{
					if(i%2==0 && j%2==0)
					{
						arr[i][j]= 'W';
					}
					else if(i%2==0 && j%2==1)
					{
						arr[i][j]= 'B';
					}
					else if(i%2==1 && j%2==0)
					{
						arr[i][j]= 'B';
					}
					else if(i%2==1 && j%2==1)
					{
						arr[i][j]= 'W';
					}
				}
			}
		}
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j< m; j++)
			{
				cout << arr[i][j];
			}
			cout << endl;
		}
	}
}