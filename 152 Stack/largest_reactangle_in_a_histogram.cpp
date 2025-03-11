

////my code shows tle for 8 test cases

// class Solution
// {
// public:
//     int largestRectangleArea(vector<int> &heights)
//     {

//         int n = heights.size();
//         int maxi = heights[0];
//         for (int i = 0; i < n; i++)
//         {
//             int count = 1;
//             int j = i;
//             int k = i;

//             // Check left side
//             while (j > 0 && heights[i] <= heights[j - 1])
//             {
//                 count++;
//                 j--;
//             }

//             // Check right side
//             while (k < n - 1 && heights[i] <= heights[k + 1])
//             {
//                 count++;
//                 k++;
//             }

//             int area = heights[i] * count;
//             if (maxi < area)
//             {
//                 maxi = area;
//             }
//         }
//         return maxi;
//     }
// };






// leetcode submission
class Solution
{
public:
    int longestValidParentheses(string s)
    {

        int maxLength = 0;
        stack<int> st;

        st.push(-1);
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
            {
                st.push(i);
            }
            else
            {
                st.pop();
                if (!st.empty())
                {
                    int length = i - st.top();
                    maxLength = max(maxLength, length);
                }
                else
                {
                    st.push(i);
                }
            }
        }
        return maxLength;
    }
};