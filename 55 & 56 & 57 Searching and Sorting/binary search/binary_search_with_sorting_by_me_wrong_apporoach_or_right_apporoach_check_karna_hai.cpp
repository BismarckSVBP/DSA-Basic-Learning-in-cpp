#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{49, 42, 33, 51, 40, 45, 50};
    int n = arr.size();

    //sorting
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++)
        {
            while (arr[i] > arr[i + 1])
            {

                int temp = arr[i + 1];
                arr[i + 1] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl <<endl;

    //binary search
    int start = 0;
    int end = arr.size() - 1;
    int mid = (start + end) / 2;
    int target = 90;
    int a = 0;
    while (start < end)
    {
        if (arr[mid] > target)
        {
            end--;
            mid = end;
        }
        else if (arr[mid] < target)
        {
            start++;
            mid = start;
        }
        else
        {
            cout << "Yes target is present in the array & it's index is " << mid <<".";
            a = 1;
            break;
        }
    }
    if (a == 0)
    {
        cout << "No target is not present in the array.";
    }

    return 0;
}
