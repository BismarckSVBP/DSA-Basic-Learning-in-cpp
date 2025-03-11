#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[6] = {0, 0, 1, 0, 1, 0};
    int count0 = 0;
    int count1 = 0;
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] == 0)
        {
            count0++;
        }
        if (arr[i] == 1)
        {
            count1++;
        }
    }
    cout << "No. of zero's in array is " << count0 << endl;

    cout << "No. of one's in array is " << count1 << endl;
    return 0;
}