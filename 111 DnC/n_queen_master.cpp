

// SAME CODE WITHOUT SYMBOL

// #include <iostream>
// #include <vector>
// using namespace std;
// void printBoard(vector<vector<bool>> &board, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << board[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << endl
//          << endl;
// }
// bool isSafe(vector<vector<bool>> &board, int row, int col, int n)
// {
//     int i = row;
//     int j = col;
//     while (j >= 0)
//     {
//         if (board[i][j] == 1)
//         {

//             return false;
//         }
//         j--;
//     }
//     i = row;
//     j = col;
//     while (i < n && j >= 0)
//     {
//         if (board[i][j] == 1)
//         {
//             return false;
//         }
//         i++;
//         j--;
//     }
//     i = row;
//     j = col;
//     while (i >= 0 && j >= 0)
//     {
//         if (board[i][j] == 1)
//         {
//             return false;
//         }
//         i--;
//         j--;
//     }

//     return true;
// }
// void solve(vector<vector<bool>> &board, int col, int n)
// {
//     if (col >= n)
//     {
//         printBoard(board, n);
//         return;
//     }
//     for (int row = 0; row < n; row++)
//     {
//         if (isSafe(board, row, col, n))
//         {
//             board[row][col] = 1;
//             solve(board, col + 1, n);
//             board[row][col] = 0;
//         }
//     }
// }

// int main()
// {
//     vector<int> arr;
//     vector<vector<bool>> board{4, vector<bool>(4, false)};

//     int col = 0;

//     int n = 4;

//     solve(board, col, n);

//     return 0;
// }

// SAME CODE WITH SYMBOL

#include <iostream>
#include <vector>
using namespace std;
void printBoard(vector<vector<char>> &board, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl
         << endl;
}
bool isSafe(vector<vector<char>> &board, int row, int col, int n)
{
    int i = row;
    int j = col;
    while (j >= 0)
    {
        if (board[i][j] == 'Q')
        {

            return false;
        }
        j--;
    }
    i = row;
    j = col;
    while (i < n && j >= 0)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
        i++;
        j--;
    }
    i = row;
    j = col;
    while (i >= 0 && j >= 0)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
        i--;
        j--;
    }

    return true;
}
void solve(vector<vector<char>> &board, int col, int n, int &count)
{
    if (col >= n)
    {
        count++;
        printBoard(board, n);
        return;
    }
    for (int row = 0; row < n; row++)
    {
        if (isSafe(board, row, col, n))
        {
            board[row][col] = 'Q';
            solve(board, col + 1, n, count);
            board[row][col] = '-';
        }
    }
}

int main()
{
    int n = 5;
    vector<vector<char>> board{n, vector<char>(n, '-')};

    int col = 0;

    int count = 0;

    solve(board, col, n, count);

    cout << endl
         << "Total no. of solution : " << count << endl;
    return 0;
}
