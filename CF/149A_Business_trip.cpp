#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin >> n;

	vector<int>arr(12);
	for(int i = 0; i < 12; i++)
	{
		cin >> arr[i];
	}
	sort(arr.rbegin(), arr.rend());
	int count = 0, sum = 0;

	for(int i = 0; i < 12; i++)
	{
		if(sum >= n)
		{ 
			break;
		}
		sum += arr[i];
		count++;

	}
	if(sum < n)
	{
		cout << -1 << endl;
	}
	else
	{
		cout << count << endl;
	}
}