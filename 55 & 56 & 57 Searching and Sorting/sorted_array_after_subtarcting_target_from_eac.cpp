#include <iostream>
using namespace std;
int main()
{
    int arr[] = {3, 4, 5, 6, 11, 13, 14, 15, 56, 70};
    int size = 10;
    int target = 12;
    int brr[12];
    int k = 4;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= target)
        {
            brr[i] = arr[i] - target;
        }
        else
        {

            brr[i] = target - arr[i];
        }
    }
    for (int j = 0; j < size; j++)
    {
        for (int i = 0; i < size; i++)
        {
            while (brr[i] > brr[i + 1])
            {

                int temp = brr[i + 1];
                brr[i + 1] = brr[i];
                brr[i] = temp;
            }
        }
    }
    for (int i = 0; i < k; i++)
    {
        brr[i] = brr[i] + target;
        cout << brr[i] << endl;
    }

    return 0;
}
