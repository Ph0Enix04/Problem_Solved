#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0, max = 0;
    int arr[2*n];
    for(int i = 0; i < 2*n; i= i+ 2)
    {
        cin >> arr[i];
        cin >> arr[i+1];
    }
    for(int i= 0; i < 2*n; i = i+2)
    {
        count = count -  arr[i] + arr[i+1];
        if(count > max)
        {
            max = count;
        }
    }
    cout << max;
}