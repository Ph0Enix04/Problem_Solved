#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int four{0}, three{0}, two{0}, one{0};
    int arr[n];
    int number = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(int i = 0; i <n; i++)
    {
        if(arr[i] == 4)
        {
            four++;
        }else if(arr[i] == 3)
        {
            three++;
        }else if(arr[i] == 1)
        {
            one++;
        }
        else if(arr[i] == 2)
        {
            two++;
        }
    }
    number = four;

    if(three > one)
    {
        number = number + three;
        if(two % 2 == 0)
        {
            number = number + (two/2);
        }else if(two % 2 != 0)
        {
            number = number + (two/2) + 1;
        }
    }
    else if(three < one)
    {
        number = number + three;
        one = one - three;
         if(two % 2 == 0)
         {
            number = number + (two / 2);
            if(one%4 == 0)
            {
                number = number + (one /4);
            }else if(one %4 != 0)
            {
                one = one /4;
                number = number + one + 1;
            }
         }
         else if(two % 2 != 0)
         {
            two = two - 1;
            number = number + (two/2);
            two = 1;
            one = one + 2;
            if(one%4 == 0)
            {
                number = number + (one /4);
            }else if(one %4 != 0)
            {
                one = one /4;
                number = number + one + 1;
            }
         }
    }
    else if( three == one)
    {
        number = number + three;
        if(two % 2 == 0)
        {
            number = number + (two/2);
        }
        else if(two % 2 != 0)
        {
            two = two - 1;
            number = number + (two /2) + 1;
        }
    }
    cout << number;
    
   return 0;
}
