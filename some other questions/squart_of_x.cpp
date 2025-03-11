

class Solution
{
public:
    // time complexity O(n)
    //  int mySqrt(int x) {
    //      if (x == 1) {
    //          return 1;
    //      } else {
    //          int p = 0;
    //          for (long long int i = 1; i <= x / 2; i++) {
    //              if (i * i <= x && (i + 1) * (i + 1) > x) {
    //                  p = i;
    //              }
    //          }
    //          return p;
    //      }
    //  }

    // tin=me comnplextity - O(log(n))
    int mySqrt(int x)
    {
        if (x == 1 || x == 0)
        {
            return x;
        }
        long long int start = 1;
        long long int end = x / 2;
        long long int res = 0;
        while (start <= end)
        {
            long long int mid = start + (end - start) / 2;

            if (mid * mid == x)
            {
                return mid;
            }
            else if (mid * mid < x)
            {
                res = mid;
                start = mid + 1;
            }
            else
            {
                res = mid - 1;
                end = mid - 1;
            }
        }
        return res;
    }
};