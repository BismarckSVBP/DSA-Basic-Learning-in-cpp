#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout << "Enter no.of elements in array : ";
    cin >> n;

    int arr[n];
    for (int j = 0; j < n; j++)
    {
        cout << "Enter " << j + 1 << "th element of array : ";
        cin >> arr[j];
    }

    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++)
        {
            while (arr[i] > arr[i + 1])
            {

                int temp = arr[i + 1];
                arr[i + 1] = arr[i];
                arr[i] = temp;
            }
        }
    }
    cout << "The element of sorted array is :";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    // two pointer approach
    cout << "The element of resultant array is :";
    int brr[n];
    int l = 0, k = n - 1;
    while (l <= k)
    {
        if (l == k)
        {
            cout << arr[l] << " ";
        }
        else
        {
            cout << arr[l] << " ";
            cout << arr[k] << " ";
        }

        l++;
        k--;
    }

    return 0;
}
