#include<iostream>
using namespace std;

int insertion( int arr[], int n)
    {
        for(int i{1}; i < n; i++)
        {
            int key = arr[i];
            int j = i -1;

            while(j > 0 && arr[j] > key)
            {
                arr[j + 1] = arr[j];
                j++;
            }
            arr[j + 1] = key;
        }
    }

int main()
{
    int x;
    int *arr[x];
    cin >> x;

    for (int i{0}; i < x ; i++)
    {
        cin >> *arr[i];
    }
    insertion( *arr[x],  x);

    for(int i{0}; i < x; i++)
    {
        cout << arr[i];
    }
    return 0;
}