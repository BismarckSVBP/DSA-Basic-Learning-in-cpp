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

            return ans;
        }
        else if (divisor * (mid) > dividend)
        {
            end = mid - 1;
        }
        else
        {
            ans = mid;

            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }

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
    int precesion;
    cout << "Enter precesion : ";
    cin >> precesion;
    int arr[dividend];
    int result = binarySearch(dividend, divisor);
    float step = 0.1;
    float finalresult = result;
    for (int i = 0; i < precesion; i++)
    {
        for (float j = finalresult; divisor * j <= dividend; j = j + step)
        {
            finalresult = j;
        }
        step = step / 10;
    }
    cout << finalresult;

    return 0;
}
