#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // taking input arr elements
    int n;
    cout << "Enter no. of element in arr array : ";
    cin >> n;
    vector<int> arr(n);
    for (int j = 0; j < n; j++)
    {
        cout << "Enter " << j + 1 << "th element of array : ";
        cin >> arr[j];
    }
    // taking input brr elements
    int m;
    cout << "Enter no. of element in brr array : ";
    cin >> m;
    vector<int> brr(m);
    for (int j = 0; j < m; j++)
    {
        cout << "Enter " << j + 1 << "th element of array : ";
        cin >> brr[j];
    }
    // try run
    // int arr[] = {64, 34, 25, 12, 22, 11, 90};
    // int brr[] = {6, 34, 1, 2, 11, 90};
    // m = 6;
    // n = 7;
    //
    vector<int> crr;

    int k = 0;
    for (int i = 0; i < m; i++)
    {
        int l = 0;

        for (int j = 0; j < n; j++)
        {

            if (brr[i] != arr[j])
            {
                l++;
            }
        }
        if (l == n)
        {
            crr.push_back(brr[i]);
            k++;
        }
    }

    for (int j = 0; j < n; j++)
    {
        crr.push_back(arr[j]);
        k++;
    }
    cout << "Here is the union of array : ";

    for (int p = 0; p < k; p++)
    {
        cout << crr[p] << " ";
    }

    return 0;
}
