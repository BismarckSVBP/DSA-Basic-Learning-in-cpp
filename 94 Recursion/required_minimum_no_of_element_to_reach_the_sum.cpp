//commentw pass by chatgpt

#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Recursive function to find all combinations
// arr[]: array of integers
// size: size of the array
// i: current index in the array
// output: current sum of the combination
// count: reference to the counter for the number of combinations
// vec: vector to store the sums of the combinations
// count2: string to store the current combination as a string
// values: vector to store all combinations as strings
void print(int arr[], int size, int i, int output, int &count, vector<int> &vec, string count2, vector<string> &values)
{
    // Base case: If we've considered all elements
    if (i == size)
    {
        count++;
        values.push_back(count2); // Store the current combination as a string
        vec.push_back(output);    // Store the sum of the current combination
        return;
    }

    // Recursive call without including the current element
    print(arr, size, i + 1, output, count, vec, count2, values);

    // Include the current element and make another recursive call
    count2 = count2 + to_string(arr[i]); // Append the current element to the combination string
    output = output + arr[i];            // Add the current element to the sum
    print(arr, size, i + 1, output, count, vec, count2, values);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};       // Array of integers
    int target = 9;                         // Target sum
    int output = 0;                          // Initial sum of combinations
    vector<int> vec;                         // Vector to store the sums of combinations
    string count2 = "";                      // String to store the current combination as a string
    vector<string> values;                   // Vector to store all combinations as strings
    int size = sizeof(arr) / sizeof(arr[0]); // Size of the array
    int i = 0;                               // Initial index
    int count = 0;                           // Counter for the number of combinations
    vector<int> noOFvalues2;                 // Vector to store the lengths of combinations that sum to the target

    // Find all subsequential additions and their values
    print(arr, size, i, output, count, vec, count2, values);

    // Iterate over the results to find the combinations that match the target sum
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << "  " << values[i] << endl; // Print the sum and the combination
        if (vec[i] == target)
        {
            noOFvalues2.push_back(values[i].size()); // Store the length of the combination if it matches the target
        }
    }

    // Find the minimum length of combinations that sum to the target
    int min = noOFvalues2[0];
    for (int i = 1; i < noOFvalues2.size(); i++)
    {
        if (min >= noOFvalues2[i])
        {
            min = noOFvalues2[i]; // Update the minimum length if a shorter combination is found
        }
    }
    cout << "Result: " << min << endl; // Print the minimum length of the combinations that sum to the target

    return 0;
}










//by
//with simple name

#include <iostream>
#include <vector>

using namespace std;
void print(int arr[], int size, int i, int output, int &count, vector<int> &vec, string count2, vector<string> &values)
{
    // base case
    if (i == size)
    {
        count++;
        values.push_back(count2);
        vec.push_back(output);
        // cout << output << endl;
        return;
    }

    print(arr, size, i + 1, output, count, vec, count2, values);

    count2 = count2 + to_string(arr[i]);
    output = output + arr[i];

    print(arr, size, i + 1, output, count, vec, count2, values);
    return;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int target = 12;
    int output = 0;
    vector<int> vec;
    string count2 = "";
    vector<string> values;
    int size = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
    int count = 0;
    vector<int> noOFvalues2;

    //for subsequential addition & getting the values which is contains by subsequential addition
    print(arr, size, i, output, count, vec, count2, values);

    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << "  " << values[i] << endl;
        if (vec[i] == target)
        {
            noOFvalues2.push_back(values[i].size());
        }
    }

    int min = noOFvalues2[0];
    for (int i = 1; i < noOFvalues2.size(); i++)
    {
        if (min >= noOFvalues2[i])
        {
            min = noOFvalues2[i];
        }
    }
    cout << "result : " << min << endl;
//   return min;

    return 0;
}

// //with full name

// // #include <iostream>
// // #include <vector>

// // using namespace std;
// // void print(int givenIntegerarray[], int size, int i, int variableForStoringSumThroughRecursion, int &count, vector<int> &VectorForStoringVariableWhichStoringSumThroughRecursion, string stringWhichstoreTheValuesCallsthroughRecursion, vector<string> &VectorWhichStoresStringWhichstoreTheValuesCallsthroughRecursion)
// // {
// //     // base case
// //     if (i == size)
// //     {
// //         count++;
// //         VectorWhichStoresStringWhichstoreTheValuesCallsthroughRecursion.push_back(stringWhichstoreTheValuesCallsthroughRecursion);
// //         VectorForStoringVariableWhichStoringSumThroughRecursion.push_back(variableForStoringSumThroughRecursion);
// //         // cout << variableForStoringSumThroughRecursion << endl;
// //         return;
// //     }

// //     print(givenIntegerarray, size, i + 1, variableForStoringSumThroughRecursion, count, VectorForStoringVariableWhichStoringSumThroughRecursion, stringWhichstoreTheValuesCallsthroughRecursion, VectorWhichStoresStringWhichstoreTheValuesCallsthroughRecursion);

// //     stringWhichstoreTheValuesCallsthroughRecursion = stringWhichstoreTheValuesCallsthroughRecursion + to_string(givenIntegerarray[i]);
// //     variableForStoringSumThroughRecursion = variableForStoringSumThroughRecursion + givenIntegerarray[i];

// //     print(givenIntegerarray, size, i + 1, variableForStoringSumThroughRecursion, count, VectorForStoringVariableWhichStoringSumThroughRecursion, stringWhichstoreTheValuesCallsthroughRecursion, VectorWhichStoresStringWhichstoreTheValuesCallsthroughRecursion);
// //     return;
// // }

// // int main()
// // {
// //     int givenIntegerarray[] = {1, 2, 3, 4, 5, 6, 7};
// //     int sum = 12;
// //     int variableForStoringSumThroughRecursion = 0;
// //     vector<int> VectorForStoringVariableWhichStoringSumThroughRecursion;
// //     string stringWhichstoreTheValuesCallsthroughRecursion = "";
// //     vector<string> VectorWhichStoresStringWhichstoreTheValuesCallsthroughRecursion;
// //     int size = sizeof(givenIntegerarray) / sizeof(givenIntegerarray[0]);
// //     int i = 0;
// //     int count = 0;
// //     vector<int> noOFvalues2;
// //     print(givenIntegerarray, size, i, variableForStoringSumThroughRecursion, count, VectorForStoringVariableWhichStoringSumThroughRecursion, stringWhichstoreTheValuesCallsthroughRecursion, VectorWhichStoresStringWhichstoreTheValuesCallsthroughRecursion);

// //     for (int i = 0; i < VectorForStoringVariableWhichStoringSumThroughRecursion.size(); i++)
// //     {
// //         // cout << VectorForStoringVariableWhichStoringSumThroughRecursion[i] << "  " << VectorWhichStoresStringWhichstoreTheValuesCallsthroughRecursion[i] << endl;
// //         if (VectorForStoringVariableWhichStoringSumThroughRecursion[i] == sum)
// //         {
// //             noOFvalues2.push_back(VectorWhichStoresStringWhichstoreTheValuesCallsthroughRecursion[i].size());
// //         }
// //     }
// //     int min = noOFvalues2[0];
// //     for (int i = 1; i < noOFvalues2.size(); i++)
// //     {
// //         if (min >= noOFvalues2[i])
// //         {
// //             min = noOFvalues2[i];
// //         }
// //     }
// //     cout << "result : " << min << endl;

// //     return 0;
// // }
