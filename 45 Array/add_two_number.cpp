#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a[5] = {5, 3, 7, 4, 0};
    int b[3] = {6, 3, 5};
    int carry = 0;
    int i = 4;
    int j = 2;
    vector<int> crr;
    vector<int> drr;

    while (i >= 0 && j >= 0)
    {
        int x = a[i] + b[j] + carry;
        int digit = x % 10;
        crr.push_back(digit);
        carry = x / 10;
        i--;
        j--;
    }

    while (i >= 0)
    {
        int x = a[i] + 0 + carry;
        int digit = x % 10;
        crr.push_back(digit);
        carry = x / 10;
        i--;
    }
    while (j >= 0)
    {
        int x = 0 + b[j] + carry;
        int digit = x % 10;
        crr.push_back(digit);
        carry = x / 10;
        j--;
    }
    if (carry)
    {
        crr.push_back(carry);
    }
    int l = crr.size() - 1;
    while (l >= 0)
    {
        drr.push_back(crr[l]);

        l--;
    }
    // storing reverse of the array of array
    int m = 0;
    while (m <= drr.size() - 1)
    {

        cout << drr[m];
        m++;
    }
    return 0;
}