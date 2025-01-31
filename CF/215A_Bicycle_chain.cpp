#include<bits/stdc++.h>
using namespace std;

int main()
{
	int f, s;
	cin >> f;
	int arr1[f];
	for(int i = 0; i < f; i++)
	{
		cin >> arr1[i];
	}
	cin >> s;
	int arr2[s];
	vector<int>result;
	for(int i = 0; i < s; i++)
	{
		cin >> arr2[i];
	}
	for(int i = 0; i < s; i++)
	{
		for(int j = 0; j < f; j++)
		{
			if(arr2[i]%arr1[j]==0)
			{
				int result1 = arr2[i]/arr1[j];
				result.push_back(result1);
			}
		}
	}
	int count{0};
	int maxr = INT_MIN;
	for(int i = 0; i < result.size(); i++)
	{
		if(maxr < result[i])
		{
			maxr = result[i];
			count = 1;
		}
		else if(maxr == result[i])
		{
			count++;
		}
	}
	cout << count << endl;
}