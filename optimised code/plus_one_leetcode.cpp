class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int n = digits.size();

        // Start from the last digit and move towards the front
        for (int i = n - 1; i >= 0; i--)
        {
            if (digits[i] < 9)
            {
                // If the current digit is less than 9, just increment it and return
                digits[i]++;
                return digits;
            }
            // If the digit is 9, set it to 0 and continue the loop
            digits[i] = 0;
        }

        // If all digits were 9, we need to add an extra digit at the front
        digits.insert(digits.begin(), 1);
        return digits;
    }
};

// class Solution {
// public:
//     vector<int> plusOne(vector<int>& digits) {
//         if (digits[digits.size() - 1] < 9) {
//             digits[digits.size() - 1] = digits[digits.size() - 1] + 1;
//             return digits;
//         }
//         if (digits[digits.size() - 1] == 9) {
//             int i = 0;
//         }
//               long long int num = 0;
//             for(int i =0;i<digits.size();i++){
//                 if(i==0){
//                     num = num*0;
//                 }
//                 else{
//                     num =num*10;
//                 }
//                 num = num+digits[i];

//             }
//             num = num+1;
//             vector<int> newdigits;
//               while (num > 0) {
//             int digit = num % 10;
//             newdigits.push_back(digit);
//             num = num/10;
//         }

//         reverse(newdigits.begin(), newdigits.end());

//            return newdigits;
//     }
// };
