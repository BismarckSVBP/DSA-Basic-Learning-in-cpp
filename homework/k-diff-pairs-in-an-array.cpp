#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int k, int p, int i)
{
    int start = i;
    int end = size;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {

        if ((arr[mid] - p) == k)
        {
            return 1;
        }

        else if ((arr[mid] - p) > k)
        {
            end = mid - 1;
        }

        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }

    return 0;
}
int main()
{
    int arr[] = {1, 1, 3, 4, 5};
    int k = 0;
    int size = 5;
    int count = 0;
    int x = 0;
    for (int i = 0; i < size - 1; i++)
    {
        int p = arr[i];
        if (i > 0)
        {
            if (arr[i] == arr[i - 1])
            {
                continue;
            }
        }
        x = binarySearch(arr, size, k, p, i + 1);
        if (x == 1)
        {
            count++;
        }
        x = 0;
    }
    cout << count;

    return 0;
}