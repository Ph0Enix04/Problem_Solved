#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int s1{0}, s2{0}, s3{0};
    int arr[n][3];
    for(int i =0; i < n; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    for(int i= 0, j = 0; i < n; i++)
    {
        s1 = s1 + arr[i][j];
    }
    for(int i= 0, j = 1; i < n; i++)
    {
        s2 = s2 + arr[i][j];
    }
    for(int i= 0, j = 2; i < n; i++)
    {
        s3 = s3 + arr[i][j];
    }
    if(s1 ==0 && s2 == 0 && s3 == 0)
    {
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
}