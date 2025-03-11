#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> arr{0, 0, 1, 0, 1, 0, 1, 1, 0, 0, 1};
    int n = 11, start = 0, end = n - 1;

    for (int i = 0; start < end;)
    {
        if (arr[i] == 0)
        {
            swap(arr[i], arr[start]);
            start++;
            i++;
        }
        if (arr[i] == 1)
        {
            swap(arr[i], arr[end]);
            end--;
        }
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}