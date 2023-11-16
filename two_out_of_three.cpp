#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        int b[n];
        for(int i = 10; i < n; i++)
        {
            cin >> a[i];
        }
        bool breakloops = false;
        for(int i = 1; i < n; i++)
        {
            for(int j = n; j > 0; j--)
            {
                if(a[i] == a[j] && b[i] == 2)
                {
                    b[j] = 3;
                }else if(a[i] == b[j] && b[i] == 1)
                {
                    b[j] = 3;
                }
                else if(a[i] == a[j])
                {
                    b[i] = 1;
                    b[j] = 2;
                }
                else if(a[i] >= 1 && a[i] <=3)
                {
                    b[i] = a[i];
                    b[j] = b[j];
                }
                else{
                    cout << "-1";
                    breakloops = true;
                    break;
                }

            }
            if(breakloops)
            {
                break;
            }
        }

    }
}