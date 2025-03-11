// in case only one element is single & other elements are present in double

#include <iostream>
using namespace std;

int main()
{
    int arr[15] = {1, 6, 7, 4, 2, 8, 3, 5, 7, 8, 5, 4, 3, 1, 2};
    int n = 15;
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
    for (int i = 0; i < 15; i += 2)
    {
        if (arr[i] == arr[i + 1])
        {
            continue;
        }
        else{
            cout << arr[i];
            break;
        }
    }
    return 0;
}