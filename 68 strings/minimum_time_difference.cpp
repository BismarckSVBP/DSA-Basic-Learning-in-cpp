#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{

    vector<string> input = {"12:10", "10:15", "13:15", "17:20", "18:00", "19:47", "23:59"};
    int length = input.size();
    int arr[length];





    // method - 1 (for converting hour into minutes)

    // for (int i = 0; i <= length - 1; i++)
    // {
    //     // minusing the ascaii value of zero
    //     int a = input[i][0] - '0';
    //     int b = input[i][1] - '0';
    //     int c = input[i][3] - '0';
    //     int d = input[i][4] - '0';

    //     // calculating the hours in minutes
    //     arr[i] = (((10 * a) + b) * 60) + ((10 * c) + d);
    // }


//solve by master



    // methode-2 (for converting hour into minutes by using stoi functions)
    for (int i = 0; i <= length - 1; i++)
    {
        string h1 = input[i];
        int hours = stoi(h1.substr(0, 2));

        int minutes = stoi(h1.substr(3, 2));

        // calculating the hours in minutes
        arr[i] = (hours * 60) + minutes;
    }




    // sorting the values of minutes
    for (int l = 0; l <= length - 1; l++)
    {
        for (int m = l; m <= length - 1; m++)
        {
            if (arr[l] > arr[m])
            {
                int temp = arr[l];
                arr[l] = arr[m];
                arr[m] = temp;
            }
        }
    }



    
    // making a vector which will store the differences of the array's elements
    vector<int> inputOfdifferences;


    // intialise the size of vector
    int p = 0;


    // storing the differences of the adjustcent's array's elements in the vector & also the difference of the last elements of the array & the first elements of the array
    for (int n = 0; n <= length - 1; n++)
    {
        if (n < length - 2)
        {
            inputOfdifferences.push_back(arr[n + 1] - arr[n]);
        }
        else
        {
            // converting the minutes in values of under 720 so that the maximum value would be 720 in the place 1440
            int a = arr[n] - arr[0];
            if (a > 720)
            {
                a = 1440 - a;
            }

            inputOfdifferences.push_back(a);
        }

        p++;
    }



    // finding the minimum element which will be minimum differences of the time
    int min = inputOfdifferences[0];

    for (int q = 1; q < p; q++)
    {
        if (min > inputOfdifferences[q])
        {
            min = inputOfdifferences[q];
        }
    }



    
    // printing the minimum element which will be minimum differences of the time
    cout << "The minimum difference b/w time is : " << min << " minutes" << endl;

    return 0;
}