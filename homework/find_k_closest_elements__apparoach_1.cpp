#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3, 4, 5, 6, 11, 13, 14, 15, 56, 70};
    int size = 10;
    int target = 72;
    int k = 4;
    int brr[k];
    int lowIdx = 0;
    int highIdx = size;
    while ((highIdx - lowIdx) >= k)
    {
        if (target - arr[lowIdx] > (arr[highIdx] - target))
        {
            lowIdx++;
        }
        else
        {
            highIdx--;
        }
    }
    for (int i = lowIdx; i <= highIdx; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}