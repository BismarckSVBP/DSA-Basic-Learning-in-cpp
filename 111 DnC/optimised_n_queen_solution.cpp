
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
unordered_map<int, bool> rowCheck;
unordered_map<int, bool> upperLeftDiagonalCheck;
unordered_map<int, bool> lowerLeftDiagonalCheck;
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
    return ((rowCheck[row] == 0) && (upperLeftDiagonalCheck[n - 1 + col - row] == 0) && (lowerLeftDiagonalCheck[col + row] == 0));
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
            rowCheck[row] = 1;
            upperLeftDiagonalCheck[n - 1 + col - row] = 1;
            lowerLeftDiagonalCheck[col + row] = 1;
            // recursive calls
            solve(board, col + 1, n, count);
            // backtracking
            board[row][col] = '-';
            rowCheck[row] = 0;
            upperLeftDiagonalCheck[n - 1 + col - row] = 0;
            lowerLeftDiagonalCheck[col + row] = 0;
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
