#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int leftone{0}, rightone{0}, bothone{0};
    vector<pair<int, int>> box;
    for(int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        box.push_back(make_pair(x, y)); 
    }
    for(int i = 0; i < n; i++)
    {
        if(box[i].first == box[i].second)
        {
            bothone++;
        }
        else if(box[i].first == 0 && box[i].second == 1)
        {
            rightone++;
        }
        else if(box[i].first == 1 &&  box[i].second == 0)
        {
            leftone++;
        }
    }
    if(bothone < leftone && bothone < rightone)
    {
        if(rightone > leftone)
        {
            int result = (2 * leftone) + bothone;
            cout << result << endl;
        }
    else
        {
            int result = (2 * rightone) + bothone;
            cout << result << endl;
        }
    }
}