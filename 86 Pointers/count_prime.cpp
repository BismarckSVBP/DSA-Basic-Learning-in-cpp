// // 0,1-> not a prime
// // 2 -> smallest prime

// #include <iostream>
// using namespace std;

// int main()
// {

//     int n;
//     cout << "Enter a number : ";
//     cin >> n;

//    // // M-1 Naive apporoach -> With time complexities--> O(n^2)
//     // int count = 0;

//     // for (int i = 2; i <= n; i++)
//     // {
//     //     bool check = 1;
//     //     if (i == 2 || i == 3)
//     //     {
//     //         count++;
//     //         continue;
//     //     }
//     //     for (int j = 2; j <= (i + 1) / 2; j++)
//     //     {

//     //         if (i % j == 0)
//     //         {
//     //             check = 0;
//     //             cout << i << " " << j << endl;
//     //             break;
//     //         }
//     //     }
//     //     if (check == 1)
//     //     {
//     //         count++;
//     //     }
//     // }
//     // cout << count << endl;

//     return 0;
// }

// 0,1-> not a prime
// 2 -> smallest prime

// #include <iostream>
// #include<math.h>
// using namespace std;

// int main()
// {

//     int n;
//     cout << "Enter a number : ";
//     cin >> n;
//     int count =0;

//     //M-2 /With time complexities--> O(n^1.5)  Better solution //squart apporaoch

//     for (int i = 2; i <= n; i++)
//     {
//            int rootOFn = sqrt(i);
//            bool check = 1;
//         if (i == 2 || i == 3)
//         {
//             count++;
//             continue;
//         }
//         for (int j = 2; j <=rootOFn; j++)
//         {

//             if (i % j == 0)
//             {
//                 check = 0;
//                 cout << i << " " << j << endl;
//                 break;
//             }
//         }
//         if (check == 1)
//         {
//             count++;
//         }
//     }
//     cout << count << endl;

//     return 0;
// }

// #include <iostream>
// #include <math.h>
// #include <vector>
// using namespace std;

// int main()
// {

//     int n;
//     cout << "Enter a number : ";
//     cin >> n;
//     vector<bool> input(n, true);
//     if (n == 0 || n == 1)
//     {
//         cout << 0 << endl;
//         return 0;
//     }
//     else
//     {

//         int count = 0;

//         // M-3 /With time complexities--> O(n(log(log(n))))   // Sieve of Eratosthenes

//         input[0] = 0;
//         input[1] = 0;
//         for (int i = 2; i <= n; i++)
//         {
//             if (input[i] == 1)
//             {
//                 count++;
//                 int j = 2 * i;
//                 cout << i << endl;
//                 while (j <= n)
//                 {
//                     input[j] = 0;
//                     j = j + i;
//                 }
//             }
//         }
//         cout << count << endl;
//     }

//     return 0;
// }

#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int noOFprime(int n)
{
    vector<bool> input(n, true);
    if (n == 0 || n == 1)
    {
        cout << 0 << endl;
        return 0;
    }
    else
    {

        int count = 0;

        // M-4 /With time complexities--> O(n(log(log(n)))) //// Segmented Sieve

        input[0] = 0;
        input[1] = 0;
        for (int i = 2; i <= n; i++)
        {
            if (input[i] == 1)
            {
                count++;
                int j = 2 * i;
                
                while (j <= n)
                {
                    input[j] = 0;
                    j = j + i;
                }
            }
        }
        return count ;
    }
}

int main()
{

    int n;
    cout << "Enter highest number : ";
    cin >> n;
    int m;
    cout << "Enter least number : ";
    cin >> m;

    int totalCount =  noOFprime(n)- noOFprime(m);
    cout << totalCount << endl;

    return 0;
}