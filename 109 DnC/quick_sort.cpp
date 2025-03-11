//BY ME 
// #include <iostream>
// #include <vector>
// using namespace std;
// int partition(vector<int> &arr, int start, int end)
// {

//     int count = 0;
//     for (int j = start + 1; j <= end; j++)
//     {

//         if (arr[start] > arr[j])
//         {
//             count++;
//         }
//     }
//     swap(arr[start], arr[start + count]);
//     int p = start;
//     int j = start;
//     while (p < (count + start))
//     {
//         if (arr[start + count] > arr[j])
//         {
//             swap(arr[j], arr[p]);
//             p++;
//         }
//         j++;
//     }
//     int l = start + count;
//     return l;
// }
// void quickSort(vector<int> &arr, int start, int end)
// {
//     if (start >= end)
//     {
//         return;
//     }

//     int l = partition(arr, start, end);
//     quickSort(arr, start, l - 1);
//     quickSort(arr, l + 1, end);
//     return;
// }
// int main()
// {
//     vector<int> arr{8, 4,4,5,7,4,4,44,1,2,4,44,4 ,2, 1}; // 2, 4, 1, 3, 5//8, 4, 2, 1//1, 20, 6, 4, 5//
//     int start = 0;
//     int end = arr.size() - 1;
//     quickSort(arr, start, end);

//     for (int value : arr)
//     {
//         cout << value << endl;
//     }

//     return 0;
// }



//BY MASTER
#include <iostream>
#include <vector>
using namespace std;
int partition(vector<int> &arr, int start, int end)
{
    // step -1 choose pivotElement
    int pivotIndex = start;
    int pivotElement = arr[start];
    // step - 2 : find right position for pivot Element and place it there
    int count = 0;
    for (int j = start + 1; j <= end; j++)
    {

        if (pivotElement >= arr[j])
        {
            count++;
        }
    }
    // jab main loop se bahar aaya,toh mere pass pivot ki right position ka index ready hai
    swap(arr[pivotIndex], arr[start + count]);
    pivotIndex = start + count;

    // step -3: left me chotr and right me bade
    int p = start;
    int j = end;
    while (p < pivotIndex && j > pivotIndex)
    {
        while (arr[p] <= pivotElement)
        {
            p++;
        }
        while (arr[j] > pivotElement)
        {
            j--;
        }
        // 2 case ho sakte hai
        //  a -> you found the element to swap
        //  b - > no element to swap
        if (p < pivotIndex && j > pivotIndex)
        {
            swap(arr[j], arr[p]);
        }
    }

    return pivotIndex;
}
void quickSort(vector<int> &arr, int start, int end)
{   //base case
    if (start >= end)
    {
        return;
    }
    //partition logic return pivotindex 
    int l = partition(arr, start, end);
    // recursive calls
    // pivot element -> left
    quickSort(arr, start, l - 1);
    // pivot element -> right
    quickSort(arr, l + 1, end);
    return;
}
int main()
{
    vector<int> arr{8,30,3,5,6,5,30,20,50}; // 2, 4, 1, 3, 5//8, 4, 2, 1//1, 20, 6, 4, 5//
    int start = 0;
    int end = arr.size() - 1;
    //quickSort(arr, start, end);
    int pivotIndex = start;
    int pivotElement = arr[start];
    // step - 2 : find right position for pivot Element and place it there
    int count = 0;
    for (int j = start + 1; j <= end; j++)
    {

        if (pivotElement >= arr[j])
        {
            count++;
        }
    }
    // jab main loop se bahar aaya,toh mere pass pivot ki right position ka index ready hai
    swap(arr[pivotIndex], arr[start + count]);
    pivotIndex = start + count;

    // step -3: left me chotr and right me bade
    int p = start;
    int j = end;
    while (p < pivotIndex && j > pivotIndex)
    {
        while (arr[p] <= pivotElement)
        {
            p++;
        }
        while (arr[j] > pivotElement)
        {
            j--;
        }
        // 2 case ho sakte hai
        //  a -> you found the element to swap
        //  b - > no element to swap
        if (p < pivotIndex && j > pivotIndex)
        {
            swap(arr[j], arr[p]);
        }
    }
    for (int value : arr)
    {
        cout << value << endl;
    }

    return 0;
}