#include <iostream>
#include <vector>
using namespace std;
int binarySearch(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;//note-in binary search to stop integer overflow(when end =2^31 -1 & start = 2^31 -1 than start+end will not belong to the range of int) we write ===>>> mid = start+(end-start)/2;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {

            start = mid+1;
        }
        else
        {

            end = mid-1;
        }
        mid = start+(end-start)/2;
    }
    return -1;
}
int main()
{
    int arr[] = {2, 3, 4, 5, 6, 7, 8, 9};
    int size = 8;
    int target = 0;
    int indexOftarget = binarySearch(arr, size, target);
    if (indexOftarget == -1)
    {
        cout << "No target is not present in the array.";
    }
    else
    {
        cout << "Yes target is present in the array & it's index is " << indexOftarget << ".";
    }

    return 0;
}
 

