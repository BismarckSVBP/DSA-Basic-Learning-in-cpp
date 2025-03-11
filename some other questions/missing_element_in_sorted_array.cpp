
#include <iostream>
#include<vector>
using namespace std;
    int missingNumber(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;
        int mid = start + (end - start) / 2;
        while((end-start) >1){
            if( nums[start]-start != nums[mid]-mid){
                end = mid;
            }else if(nums[end]-end!=nums[mid]-mid){
                start = mid;
            }
            mid = start + (end - start) / 2;
        }
        return nums[start]+1;
    }

int main()
{
    vector<int>arr{1,2,3,4,6};
    int x = missingNumber(arr);
    cout<<x;

    return 0;
}