#include <iostream>
using namespace std;

int main()
{

    // for creating an integer
    int *a = new int;

    // for creating a char
    char *b = new char;

    // for creating a float
    float *c = new float;

    // for creating an 1-D array
    int *arr = new int[5];

    // deleting 1-D array
    delete[] arr;

    // for creating a 2-D array
    int row = 5;  // no of rows
    int cols = 5; // no of cols
    int **brr = new int *[row];
    for (int i = 0; i < row; i++)
    {
        brr[i] = new int[cols];
    }
    // giving the values to every  element
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            brr[i][j] = i + j;
        }
    }
    // printing 2-D array

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }

    // deleting 1-D array //deallocation
    // step-1 for deletion
    for (int j = 0; j < cols; j++)
    {
        delete[] brr[j];
    }
    // step-2 for deletion
    delete[] brr;
    

    return 0;
}
