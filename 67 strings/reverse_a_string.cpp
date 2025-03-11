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
void reverseAnArray(char arr[], int i, int j)
{
    while (i < j)
    {
        char temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}
void replaceInAnArray(char arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == ' ')
        {
            arr[i] = '@';
        }
    }
}
int main()
{
    char arr[] = "Hello Abhay";
    cout << arr << endl;
    int length = getlength(arr);
    int i = 0;
    int j = length - 1;
    reverseAnArray(arr, i, j);
    cout << arr << endl;
    replaceInAnArray(arr,length);
    cout << arr << endl;

    

    return 0;
}
