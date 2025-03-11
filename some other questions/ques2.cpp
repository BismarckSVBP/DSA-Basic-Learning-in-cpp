#include <iostream>
using namespace std;
int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = 8;
    int j = n - 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            int ans = arr[i];
            arr[i] = arr[j];
            j--;
            for (int k = i + 2; k < n; k++)
            {
                arr[k] = arr[k - 1];
            }
            arr[i + 1] = ans;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    return 0;
}
