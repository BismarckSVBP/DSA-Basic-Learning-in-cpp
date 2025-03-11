

#include <iostream>
#include <vector>
using namespace std;
int count = 0;

void merge(vector<int> &arr, int start, int end)
{
    int mid = (start + end) / 2;

    int lengthOfleft = mid - start + 1;

    int lengthOfright = end - mid;

    int *leftPartArray = new int[lengthOfleft];
    int *rightPartArray = new int[lengthOfright];

    int s = start;

    for (int i = 0; i < lengthOfleft; i++)
    {
        leftPartArray[i] = arr[s];
        s++;
    }
    s = mid + 1;
    for (int j = 0; j < lengthOfright; j++)
    {
        rightPartArray[j] = arr[s];
        s++;
    }

    int leftIndex = 0;
    int rightIndex = 0;
    int mainIndex = start;

    int extraVariable = 0; // we defined it because we want to include those case in which left array have more elements then the right array but lengthOfleft + lengthOfright == arr.size()  // we can understand it by taking vector<int> arr{2, 4, 1, 3, 5}; in this when 1 is swichted then count becomes one time plus in case of but not for 4 so that we include this case for another cases\

    while (leftIndex < lengthOfleft && rightIndex < lengthOfright)
    {
        if (leftPartArray[leftIndex] > rightPartArray[rightIndex])
        {
            arr[mainIndex] = (rightPartArray[rightIndex]);
            cout << leftPartArray[leftIndex] << " " << rightPartArray[rightIndex] << endl;

            mainIndex++;
            rightIndex++;
            count++;
            extraVariable++;
        }
        else
        {
            arr[mainIndex] = (leftPartArray[leftIndex]);
            mainIndex++;
            leftIndex++;
        }
    }
    while (rightIndex < lengthOfright)
    {

        arr[mainIndex] = (rightPartArray[rightIndex]);
        mainIndex++;
        rightIndex++;
    }

    while (leftIndex < lengthOfleft)
    {

        arr[mainIndex] = (leftPartArray[leftIndex]);
        if (lengthOfleft + lengthOfright == arr.size())
        {
            cout << leftPartArray[leftIndex] << " Ist " << rightPartArray[rightIndex] << endl;

            count++;
        }
        if (lengthOfleft == extraVariable + 2)
        {
            cout << leftPartArray[leftIndex] << " IInd " << rightPartArray[rightIndex] << endl;
            extraVariable++;
            count++;
        }
        mainIndex++;
        leftIndex++;
    }

    return;
}

void sortingfunction(vector<int> &arr, int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int mid = (start + end) / 2;

    sortingfunction(arr, start, mid);

    sortingfunction(arr, mid + 1, end);

    merge(arr, start, end);
    return;
}
int main()
{
    vector<int> arr{2, 4, 1, 3, 5}; // 2, 4, 1, 3, 5//8, 4, 2, 1//1, 20, 6, 4, 5//
    int start = 0;
    int end = arr.size() - 1;

    sortingfunction(arr, start, end);
    for (int value : arr)
    {
        cout << value << " ";
    }
    cout << endl;
    cout << count << endl;
    return 0;
}

// #include <iostream>
// #include <vector>
// using namespace std;
// int count = 0;

// void merge(vector<int> &arr, int start, int end)
// {
//     int mid = (start + end) / 2;

//     int lengthOfleft = mid - start + 1;

//     int lengthOfright = end - mid;

//     int *leftPartArray = new int[lengthOfleft];
//     int *rightPartArray = new int[lengthOfright];

//     int s = start;

//     for (int i = 0; i < lengthOfleft; i++)
//     {
//         leftPartArray[i] = arr[s];
//         s++;
//     }
//     s = mid + 1;
//     for (int j = 0; j < lengthOfright; j++)
//     {
//         rightPartArray[j] = arr[s];
//         s++;
//     }

//     int leftIndex = 0;
//     int rightIndex = 0;
//     int mainIndex = start;
//     while (leftIndex < lengthOfleft && rightIndex < lengthOfright)
//     {
//         if (leftPartArray[leftIndex] > rightPartArray[rightIndex])
//         {
//             arr[mainIndex] = (rightPartArray[rightIndex]);
//             cout << leftPartArray[leftIndex] << " " << rightPartArray[rightIndex] << endl;
//             count++;
//             mainIndex++;
//             rightIndex++;
//         }

//         else
//         {
//             arr[mainIndex] = (leftPartArray[leftIndex]);

//             mainIndex++;
//             leftIndex++;
//             // if (leftIndex == lengthOfleft - 1 && leftPartArray[leftIndex] != leftPartArray[leftIndex - 1])
//             // {
//             //     cout << "hell" << leftPartArray[leftIndex] << " " << endl;
//             //     count++;
//             // }
//         }
//     }
//     while (rightIndex < lengthOfright)
//     {

//         arr[mainIndex] = (rightPartArray[rightIndex]);
//         mainIndex++;
//         rightIndex++;
//     }

//     while (leftIndex < lengthOfleft)
//     {

//         arr[mainIndex] = (leftPartArray[leftIndex]);

//         cout << lengthOfleft << "h" << lengthOfright << endl;
//         if ((lengthOfleft + lengthOfright) == (arr.size()))
//         {
//             cout << "hello" << leftPartArray[leftIndex] << " " << endl;
//             count++;
//         }
//         mainIndex++;
//         leftIndex++;
//     }

//     return;
// }

// void sortingfunction(vector<int> &arr, int start, int end)
// {
//     if (start >= end)
//     {
//         return;
//     }
//     int mid = (start + end) / 2;

//     sortingfunction(arr, start, mid);

//     sortingfunction(arr, mid + 1, end);

//     merge(arr, start, end);
//     return;
// }
// int main()
// {
//     vector<int> arr{2, 3, 4, 5, 6};
//     int start = 0;
//     int end = arr.size() - 1;

//     sortingfunction(arr, start, end);
//     // for (int value : arr)
//     // {
//     //     cout << value << " " ;
//     // }
//     cout << endl;

//     cout << count << endl;

//     return 0;
// }
