//Problem1 : Reverse an array or a string
#include <bits/stdc++.h>
using namespace std;
void arrayReverse(int arr[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    arrayReverse(arr, n);

    return 0;
}

//Input : 1 2 3 4 5 6
//Output : 6 5 4 3 2 1
