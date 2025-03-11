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
        for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
