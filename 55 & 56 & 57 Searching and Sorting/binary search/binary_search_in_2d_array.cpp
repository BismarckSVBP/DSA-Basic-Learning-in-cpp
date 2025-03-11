#include <iostream>
#include <vector>
using namespace std;
bool binarySearch(int arr[][4], int size, int target, int m, int n)
{
    int start = 0;
    int end = size - 1;
    int row = m;
    int col = n;
    int mid = (start + end) / 2;

    while (start <= end)
    {
        int rowsidx = mid / col;
        int colsidx = mid % col;
        if (arr[rowsidx][colsidx] == target)
        {
            cout << "Found at rowindex " << rowsidx << " and  colindex " << colsidx <<endl;

            return true;
        }
        else if (arr[rowsidx][colsidx] < target)
        {

            start = mid + 1;
        }
        else
        {

            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return 0;
}
int main()
{
        int arr[][4] = {{2, 3, 4, 5}, {6, 7, 8, 9}};
    // int arr[][2] = {{2, 3}, {4, 5}, {6, 7}, {8, 9}};
    int size = 8;
    int target = 8;
    int m=2, n=4;
    int indexOftarget = binarySearch(arr, size, target, m, n);
    if (indexOftarget == 0)
    {
        cout << "No target is not present in the array.";
    }
    else
    {
        cout<< indexOftarget << ".";
    }

    return 0;
}
