#include <iostream>
#include <vector>
using namespace std;
int binarySearch(int dividend, int divisor)
{
    int start = 0;
    int end = dividend;
    int mid = start + (end - start) / 2;
    int ans = 0;
    int remainder = 0;
    while (start <= end)
    {
        if (divisor * (mid) == dividend)
        {
            ans = mid;
            cout << "The quotient is " << ans << " and the remainder is " << 0 << ".";
            return 1;
        }
        else if (divisor * (mid) > dividend)
        {
            end = mid - 1;
        }
        else
        {
            ans = mid;
            remainder = dividend - (divisor * ans);
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    cout << "The quotient is " << ans << " and the remainder is " << remainder << ".";
    return ans;
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
    int indexOftarget = binarySearch(dividend, divisor);
    return 0;
}
