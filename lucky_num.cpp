#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long number;
    cin >> number;
    stringstream oss;
    oss << number;
    string xyz;
    oss >> xyz;
    long long counts{0}, countf{0};
    for(int i =0; i < xyz.size(); i++)
    {
        if(xyz[i] == '4')
        {
            countf++;
        }else if(xyz[i] == '7')
        {
            counts++;
        }
    }
    if((counts + countf)==4 || (counts + countf) == 7)
    {
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    
}