#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int target, int j, int i)
{
    int start = j;
    int end = i;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {

            start = mid + 1;
        }
        else
        {

            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    int arr[] = {3, 4, 5, 6, 11, 13, 14, 15, 56, 70};
    int size = 10;
    int target = 18;
    int i = 1;
    if (arr[0] == target)
    {
        cout << "yes" << " " << arr[0];
    }
    else
    {

        while (i < size && arr[i] < target)
        {
            i = i * 2;
        }
        int j = i / 2;

        int p = binarySearch(arr, size, target, j, i);
        if (p == -1)
        {
            cout << "no";
        }
        else
        {
            cout << "yes" << " " << p;
        }
    }

    return 0;
}