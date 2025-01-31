#include <bits/stdc++.h>
using namespace std;

int main()
{
    string number;
    cin >> number;
    sort(number.rbegin(), number.rend());
    int n = number.size() - (number.size()/2);
    string temp;
    for(int i = 0; i < n; i++)
    {
        temp.push_back(number[i]);
    }
    sort(temp.begin(), temp.end());
    for(int i = 0; i < temp.size(); i++)
    {
        cout << temp[i];
        if(i < (temp.size()-1))
        {
            cout << "+";
        }
    }
    cout << endl;

    
}