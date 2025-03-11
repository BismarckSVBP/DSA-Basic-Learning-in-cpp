#include <iostream>
#include <vector>
using namespace std;
bool isSafe(vector<vector<bool>> &board, int row, int col, int i, int j, int &count, int n)
{

    return ((i >= 0 && j >= 0) && (board[i][j] == 0) && ((i <= row - 1 && j <= col - 1)));
}
void solve(vector<vector<bool>> &board, int row, int col, int i, int j, int &count, int n)
{
    if (j >= col-1)
    {
        count++;
        return;
    }
    for (i = 0; i < row; i++)
    {
        if (isSafe(board, row, col, i, j, count, n))
        {
            n = n - 1;
            int p = i;
            int q = j;
            while (q <= col - 1)
            {

                board[p][q] = 1;
                q++;
            }
            p = i;
            q = j;
            while (p <= row - 1 && q <= col - 1)
            {

                board[p][q] = 1;
                p--;
                q++;
            }
            p = i;
            q = j;
            while (p > 0 && q <= col - 1)
            {

                board[p][q] = 1;
                p++;
                q++;
            }
            solve(board, row, col, i, j + 1, count, n);
            n = n + 1;
            p = i;
            q = j;
            while (q <= col - 1 && q >= j)
            {
                board[p][q] = 0;
                q++;
            }
            p = i;
            q = j;
            while ((p > 0 && q <= col - 1) && (p <= i && q >= j))
            {

                board[p][q] = 0;
                p--;
                q++;
            }
            p = i;
            q = j;
            while ((p <= row - 1 && q <= col - 1) && (p >= i && q >= j))
            {

                board[p][q] = 0;
                p++;
                q++;
            }
        }
    }
}

int main()
{
    vector<int> arr;
    vector<vector<bool>> board{4, vector<bool>(4, false)};
    int row = 4;
    int col = 4;
    int i = 0;
    int j = 0;
    int n = 4;
    int count = 0;
    solve(board, row, col, i, j, count, n);
    cout << endl
         << count;

    return 0;
}
