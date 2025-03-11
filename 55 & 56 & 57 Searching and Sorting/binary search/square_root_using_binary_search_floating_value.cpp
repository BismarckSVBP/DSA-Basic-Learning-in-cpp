#include <iostream>
using namespace std;
int binarySearch(int size, int target)
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
    int precision;
    cout << "Enter Number of digit from where you want to precise your answer : ";
    cin >> precision;
    int size = target + 1;
    int arr[size];

    int sr = binarySearch(size, target);
    double finalsr = sr;
    double step = 0.1;
    for (int i = 0; i < precision; i++)
    {
        for (double j = finalsr; j * j <= target; j = j + step)
        {
            finalsr = j;
        }
        step = step / 10;
    }

    cout << "The square root of the given number is :  " << finalsr;

    return 0;
}