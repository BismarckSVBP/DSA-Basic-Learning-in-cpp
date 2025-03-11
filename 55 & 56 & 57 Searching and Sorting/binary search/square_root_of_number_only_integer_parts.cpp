#include <iostream>
using namespace std;
int binarySearch( int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if ((mid * mid) <= target && ((mid + 1) * (mid + 1) > target))
        {
            return mid;
        }
        else if ((mid * mid) <= target)
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

    int target;
    cout << "Enter number which square root you want : ";
    cin >> target;
    int size = target + 1;
    int arr[size];

    for (int i = 0; i <= target; i++)
    {
        arr[i] = i;
    }
    int sr = binarySearch( size, target);
    if (sr == -1)
    {
        cout << "No";
    }
    else
    {
        cout << "Yes" << sr;
    }
    return 0;
}