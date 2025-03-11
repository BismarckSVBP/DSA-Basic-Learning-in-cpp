class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        for (int j = 0; j < nums.size(); j++)
        {
            for (int i = 0; i < nums.size(); i++)
            {
                while (arr[i] > arr[i + 1])
                {

                    int temp = arr[i + 1];
                    arr[i + 1] = arr[i];
                    arr[i] = temp;
                }
            }
        }
    }
};