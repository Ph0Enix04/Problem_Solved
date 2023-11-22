#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s, r; cin >> s;

	for(int i= 0; i < s.size(); i++)
	{
		s[i] = tolower(s[i]);
		if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')
		{
			continue;
		}
		r+='.';
		r+=s[i];
	}
	cout << r << endl;
}