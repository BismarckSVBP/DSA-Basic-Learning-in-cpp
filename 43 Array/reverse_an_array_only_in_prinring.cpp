#include <iostream>
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
    cout << endl;

    // two pointer approach
    cout << "The element of resultant array is :";

    int k = n - 1, l = 0;
    while (l < k)
    {
        swap(arr[l],arr[k]);//swap function is a predefined function in cpp        
        // int temp = arr[l];
        // arr[l] = arr[k];
        // arr[k] = temp;
        l++;
        k--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "hello";

    return 0;
}