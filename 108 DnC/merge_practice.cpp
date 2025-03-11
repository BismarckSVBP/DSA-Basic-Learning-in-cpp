#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int> &arr, int start, int end)
{
    int mid = (start + end) / 2;
    int lengthOffirst = mid - start + 1;
    int lengthOfSecond = end - mid;
    int *first = new int[lengthOffirst];
    int *second = new int[lengthOfSecond];
    int k = start;
    int i = 0;
    while (i < lengthOffirst)
    {
        first[i] = arr[k];
        k++;
        i++;
    }

    k = mid + 1;
    int j = 0;
    while (j < lengthOfSecond)
    {
        second[j] = arr[k];
        k++;
        j++;
    }
    int firstIdx = 0;
    int secondIdx = 0;
    int mainIdx = start;
    while (firstIdx < lengthOffirst && secondIdx < lengthOfSecond)
    {
        if (first[firstIdx] >= second[secondIdx])
        {
            arr[mainIdx] = second[secondIdx];
            secondIdx++;
            mainIdx++;
        }
        else
        {
            arr[mainIdx] = first[firstIdx];
            firstIdx++;
            mainIdx++;
        }
    }
    while (firstIdx < lengthOffirst)
    {
        arr[mainIdx] = first[firstIdx];
        firstIdx++;
        mainIdx++;
    }
    while (secondIdx < lengthOfSecond)
    {
        arr[mainIdx] =  second[secondIdx];
        secondIdx++;
        mainIdx++;
    }
    return;
}

void mergesort(vector<int> &arr, int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int mid = (start + end) / 2;

    mergesort(arr, start, mid);

    mergesort(arr, mid + 1, end);

    merge(arr, start, end);
}
int main()
{
    vector<int> arr{4, 3, 5, 6, 2};
    int start = 0;
    int end = arr.size() - 1;
    mergesort(arr, start, end);
    for (int value : arr)
    {
        cout << value << " ";
    }
    return 0;
}