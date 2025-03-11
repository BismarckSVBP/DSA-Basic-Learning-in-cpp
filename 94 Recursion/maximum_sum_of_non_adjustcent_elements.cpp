#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
void calculation(vector<int> &arr, int sum, int &maxi, int i)
{
    if (i >= arr.size())
    {
        cout << sum << " ";
        maxi = max(sum, maxi);
        return;
    }
    //exclude
    calculation(arr, sum, maxi, i +1);
    //include
    calculation(arr, sum + arr[i], maxi, i + 2);
    return;
}
int main()
{
    vector<int> arr{4, 5, 8, 7};
    int sum = 0;
    int i = 0;
    int maxi = INT_MIN;
    calculation(arr, sum, maxi, i);
    cout << maxi << endl;
    return 0;
}
