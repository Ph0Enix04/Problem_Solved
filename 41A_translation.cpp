#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s1, s2, s3;
	cin >> s1 >> s3;
	int len = s1.size()/s1[0];
	for(int i = len,j=0; i >= 0; i--, j++)
	{
		s2[j] = s1[i];
	}
	if(s3 == s2)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}

}
