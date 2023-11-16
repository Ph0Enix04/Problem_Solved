#include<iostream>
using namespace std;

// in bubble sort the idea of the algorithm is to move higher valued elements generally towards 
//the right and lower value elements generally towards the left

// in pseudo code
//      set swap counter to a non zero value
//          repeat untill the swap counter is 0;
//              reset swap counter to 0
//              look at each adjacent pair
//              if two adjacent elements are not in order swap them and add one to the swap counter


int main()
{
    // worst case senerio - O(n^2)
    //  best case senerio - O(n)
    
    int n{0};
    int arr[n];
    cin >> n;
    for (int i{0}; i<n ; i++)
    {
        cin >> arr[i];
    }

    int counter = 1;
    while( counter < n-1)
    {
        for (int i=0; i < n - counter; i++)
        {
            if (arr[i] > arr[i+1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        counter++;
    }

for(int i = 0; i < n; i++)
{
    cout << arr[i] << " ";
}cout << endl;
    return 0;
}