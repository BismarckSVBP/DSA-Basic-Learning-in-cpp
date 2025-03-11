
#include <iostream>
using namespace std;
bool print(int arr[], int size, bool &check)
{
    if (size == 0)
    {
        check = 1;
        return check;
    }
    if (arr[size] >= arr[size - 1])
    {
        print(arr, size - 1, check);
    }

    return check;
}

int main()
{
    int arr[] = {20, 20, 45, 89, 89, 90};
    int size = sizeof(arr) / sizeof(arr[0]);
    bool check = 0;
    int indexOfTarget = print(arr, size - 1, check);
    cout << indexOfTarget << endl;
    return 0;
}
