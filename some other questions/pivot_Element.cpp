
#include <iostream>
#include <vector>
using namespace std;
int pivotElement(vector<int> arr, int size)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if ((arr[mid] > arr[mid - 1]) && (arr[mid] > arr[mid + 1]))
        {
            return mid;
        }
        else if ((arr[mid] > arr[mid - 1]))
        {

            start = mid + 1;
        }
        else
        {

            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return arr[start];
}
int main()
{
    vector<int> arr{4, 6, 7, 9, 10, 11, 12, 13, 1, 2, 3,5,6,7,18,95,96};
    int size = arr.size();
    
    int x = pivotElement(arr, size);
    cout << x;

    return 0;
}