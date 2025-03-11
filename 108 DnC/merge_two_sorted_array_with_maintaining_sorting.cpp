#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int> arr, vector<int> brr, int start, int end, vector<int> &crr)
{
    int l1 = arr.size();
    int l2 = brr.size();
    int j = 0;
    int k = 0;
    for (int i = start; i < end; i++)
    {
        if (j < l1 && k < l2)
        {
            if (arr[j] > brr[k])
            {
                crr.push_back(brr[k]);
                k++;
            }
            else
            {
                crr.push_back(arr[j]);
                j++;
            }
        }
        else if (k < l2)
        {
            crr.push_back(brr[k]);
            k++;
        }
        else if (j < l1)
        {
            crr.push_back(arr[j]);
            j++;
        }
    }
    return;
}
int main()
{
    vector<int> arr{1, 2, 3, 4};
    vector<int> brr{0, 2, 6, 7, 8, 9};
    vector<int> crr;
    int start = 0;
    int end = arr.size() + brr.size();
    merge(arr, brr, start, end, crr);
    for (int value : crr)
    {
        cout << value << endl;
    }
    return 0;
}