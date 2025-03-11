void merge(vector<int> arr, vector<int> brr, int start, int end, vector<int> &crr)
{
    int l1 = arr.size();
    int l2 = brr.size();
    int maxi = max(l1, l2);
    int mini = min(l1, l2);
    int j = 0;
    int k = 0;
    for (int i = start; i < end; i++)
    {
        if (j < l1 && k < l2)
        {
            if (arr[j] > brr[k])
            {
                crr.push_back(brr[k]);
                k++;
            }
            else
            {
                crr.push_back(arr[j]);
                j++;
            }
        }
        else if (k < l2)
        {

            crr.push_back(brr[k]);
            k++;
        }

        else if (j < l1)
        {

            crr.push_back(arr[j]);
            j++;
        }
    }
    return;
}