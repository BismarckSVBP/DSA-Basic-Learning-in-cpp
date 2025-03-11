




// we can not pass an array by reference because it already pass by reference so that we use vector to pass as reference






#include <iostream>
using namespace std;
int print(int arr[], int &target, int start, int end, int &ans)
{

    if (start > end)
    {
        return ans;
    }
    int mid = (start + end) / 2;
    if (target == arr[mid])
    {
        ans = mid;
        return ans;
    }
    if (target > arr[mid])
    {
        start = mid + 1;
    }
    if (target < arr[mid])
    {
        end = mid - 1;
    }

    print(arr, target, start, end, ans);

    return ans;
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;
    int target = 99;
    int start = 0;
    int end = size - 1;
    int ans = -1;
    int indexOfTarget = print(arr, target, start, end, ans);
    cout << indexOfTarget << endl;
    return 0;
}
