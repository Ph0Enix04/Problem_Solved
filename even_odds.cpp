#include<bits/stdc++.h>
using namespace std;


int main()
{

	long n, k, d{1};

	cin >> n >> k;

	vector<pair<int, int>>num;

	for(int x= 1, y = 2, i = 1, j = (n/2)+1; i <= n/2; x+=2, y+=2, i++, j++)
	{
		num.push_back(make_pair(x , i));
		num.push_back(make_pair(y , j));

		if(k == num[i].second)
		{
			cout << num[i].first;
			break;
		}
	}
}
