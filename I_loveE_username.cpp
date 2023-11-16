#include <bits/stdc++.h>
using namespace std;

int main()
{
    //if he scores the lowest among the previous matches from 1
    // if he scores the heighest among the previous matches form 1
    int n, count{0};
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int minNum = arr[0];
    int maxNum = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] < minNum)
        {
            minNum = arr[i];
            count++;
        }
        else if(arr[i] > maxNum)
        {
            maxNum = arr[i];
            count++;
        }
    }
    cout << count << endl;
}