#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter number which factorial you want : ";
    cin >> n;
    vector<int> arr;
    vector<int> brr;
    arr.push_back(1);

    int carry = 0;
    for (int i = 2; i <= n; i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            int x = (arr[j] * i) + carry;
            arr[j] = x % 10;
            carry = x / 10;
        }
        while (carry)
        {
            arr.push_back(carry % 10);
            carry = carry / 10;
        }
        carry = 0;
    }
    int l = arr.size() - 1;
    while (l >= 0)
    {
        brr.push_back(arr[l]);

        l--;
    }
    cout << endl;

    int m = 0;
    while (m < brr.size())
    {

        cout << brr[m];
        m++;
    }
    return 0;
}