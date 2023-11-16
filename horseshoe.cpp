#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<long long>number;
    long inputNumber;
    long t = 4;
    while(t--)
    {
        cin >> inputNumber;
        if(inputNumber == -1)
        {
            break;
        }
        number.insert(inputNumber);
    }
    int result = 4 - number.size();
    cout << result << endl;;
}
