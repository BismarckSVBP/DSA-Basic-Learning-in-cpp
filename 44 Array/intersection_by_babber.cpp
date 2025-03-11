#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{4, 2, 3, 1, 4, 5};
    vector<int> brr{8, 1, 2, 3, 4, 2};
    vector<int> crr;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < brr.size(); j++)
        {
            if (brr[j] == arr[i])
            {
                brr[j] = -1; // brr[j] =INT_MIN;
                crr.push_back(arr[i]);
            }
        }
    }
    for (int p = 0; p < crr.size(); p++)
    {
        cout << crr[p] << " ";
    }

    return 0;
}