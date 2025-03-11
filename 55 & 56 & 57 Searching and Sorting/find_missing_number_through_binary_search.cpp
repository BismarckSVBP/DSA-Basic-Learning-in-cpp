#include <iostream>
#include <vector>
using namespace std;
int binarySearchOffindmissingnum(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if ((arr[mid] != mid + 1) && (arr[mid - 1] == mid))
        {
            return mid + 1;
        }
        else if (arr[mid] != mid + 1)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 6, 7, 8, 9};
    int size = 8;
    int target = 0;
    int missingnum = binarySearchOffindmissingnum(arr, size);
    if (missingnum == -1)
    {
        cout << "No missing element is present in the array.";
    }
    else
    {
        cout << "Yes missing element is present in the array & it's is " << missingnum << ".";
    }

    return 0;
}
