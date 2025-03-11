#include <iostream>
using namespace std;
int getlength(char arr[])
{
    int i = 0;
    while (arr[i] != '\0')
    {
        i++;
    }
    return i;
}

void uppercase(char arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        if (arr[i] >= 'a')
        {
            arr[i] = arr[i] - 'a' + 'A';
        }
    }
}

void lowercase(char arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        if (arr[i] != ' ' && arr[i] < 'a')
        {
            arr[i] = arr[i] - 'A' + 'a';
        }
    }
}

int main()
{
    char arr[] = "abhay kumar kasaudhan";
    cout << arr << endl;
    int length = getlength(arr);
    int i = 0;
    int j = length - 1;
    uppercase(arr, length);
    cout << arr << endl;
    lowercase(arr, length);
    cout << arr << endl;
    return 0;
}
