#include <iostream>
#include <vector>
using namespace std;
bool binarySearch(int dividend, int divisor)
{
    int start = 0;
    int end = dividend - 1;
    int mid = (start + end) / 2;
    int ans = 0;
    int remainder = 0;
    while (start <= end)
    {
        if (divisor * mid <= dividend && divisor * (mid + 1) > dividend)
        {
            ans = mid + ans;
            remainder = dividend - (divisor * ans);
            cout << "The quotient is " << ans << " and the remainder is " << remainder << ".";
            return true;
        }

        else if (divisor * mid < dividend)
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

    bool indexOftarget = binarySearch(dividend, divisor);

    return 0;
}
