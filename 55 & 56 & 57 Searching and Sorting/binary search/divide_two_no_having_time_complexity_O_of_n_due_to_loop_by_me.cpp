#include <iostream>
#include <vector>
using namespace std;
bool binarySearch(int arr[], int dividend, int divisor)
{
    int start = 0;
    int end = dividend - 1;
    int mid = (start + end) / 2;
    int ans = 0;
    int remainder = 0;
    while (start <= end)
    {
        if (divisor * arr[mid] <= dividend && divisor * arr[mid + 1] > dividend)
        {
            ans = arr[mid] + ans;
            remainder = dividend - (divisor * ans);
            cout << "The quotient is " << ans << " and the remainder is " << remainder << ".";
            return true;
        }

        else if (divisor * arr[mid] < dividend)
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
    int dividend;
    cout << "Enter dividend : ";
    cin >> dividend;
    int divisor;
    cout << "Enter divisor : ";
    cin >> divisor;
    int arr[dividend];

    for (int i = 0; i <= dividend; i++)
    {
        arr[i] = i;
    }
    bool indexOftarget = binarySearch(arr, dividend, divisor);

    return 0;
}
