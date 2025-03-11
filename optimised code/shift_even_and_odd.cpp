

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 6, 6, 7, 8};
    int i = 0;
    int j = 7;
    while (i < j)
    {
        if (arr[i] % 2 != 0 && arr[j] % 2 == 0)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
        if (arr[i] % 2 == 0)
        {
            i++;
        }
        if (arr[j] % 2 != 0)
        {
            j--;
        }
    }
    for (int k = 0; k < 8; k++)
    {
        cout << arr[k] << " ";
    }
    i =0;
    while(arr[i] & 1 != 1){
        
    }
    return 0;
}