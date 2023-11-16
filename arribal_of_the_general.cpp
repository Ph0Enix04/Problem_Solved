#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int minNum = INT_MAX;
    int maxNum = INT_MIN;
    int minIndex = -1;
    int maxIndex = -1;

    for(int i = 0; i < n; i++)
    {
        if(array[i] <= minNum)
        {
            minNum = array[i];
            minIndex = i;
        }
    }
    for(int i = 0; i < n; i++)
    {
        if(array[i] > maxNum)
        {
            maxNum = array[i];
            maxIndex = i;
        }
    }
    int num1{0}, num2{0}, num{0};
    if(maxIndex > minIndex)
    {
        num1 = n-1-minIndex;
        num2 = maxIndex;
        num = num1 + num2-1;
        cout << num << endl; 
    }else
    {
        num1 = n-1-minIndex;
        num2 = maxIndex;
        num = num1 + num2;
        cout << num << endl; 
    }
}