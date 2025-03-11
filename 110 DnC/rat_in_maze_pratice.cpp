#include <iostream>
#include <vector>
#include <string>
using namespace std;
bool isSafe(vector<vector<int>> arr, vector<vector<bool>> visited, int i, int j, int row, int col)
{
    return ((i >= 0 && i < row) && (j >= 0 && j < col) && (arr[i][j] == 1) && (visited[i][j] == 0));
}
void solve(vector<vector<int>> &arr, vector<vector<bool>> &visited, int i, int j, int row, int col, string output, vector<string> &store)
{
    // base case
    if (i == row - 1 && j == col - 1)
    {
        store.push_back(output);
        return;
    }
    // move down
    if (isSafe(arr, visited, i + 1, j, row, col))
    {
        // make that position occupied by declearing it true
        visited[i + 1][j] = true;
        solve(arr, visited, i + 1, j, row, col, output + 'D', store);
        // backtracking
        visited[i + 1][j] = false;
    }
    // move right
    if (isSafe(arr, visited, i, j + 1, row, col))
    {
        // make that position occupied by declearing it true
        visited[i][j + 1] = true;
        solve(arr, visited, i, j + 1, row, col, output + 'R', store);
        // backtracking
        visited[i][j + 1] = false;
    }
    // move up
    if (isSafe(arr, visited, i - 1, j, row, col))
    {
        // make that position occupied by declearing it true
        visited[i - 1][j] = true;
        solve(arr, visited, i - 1, j, row, col, output + 'U', store);
        // backtracking
        visited[i - 1][j] = false;
    }
    // move left
    if (isSafe(arr, visited, i, j - 1, row, col))
    {
        // make that position occupied by declearing it true
        visited[i][j - 1] = true;
        solve(arr, visited, i, j - 1, row, col, output + 'L', store);
        // backtracking
        visited[i][j - 1] = false;
    }
    return;
}
int main()
{
    vector<vector<int>> arr{{1, 0, 0, 0},
                            {1, 1, 0, 0},
                            {0, 1, 1, 0},
                            {0, 0, 1, 1}};
    vector<vector<bool>> visited{4, vector<bool>(4, false)};
    visited[0][0] = 1;
    int i = 0;
    int j = 0;
    int row = 4;
    int col = 4;
    string output = "";
    vector<string> store;
    solve(arr, visited, i, j, row, col, output, store);
    for (auto val : store)
    {
        cout << val << " ";
    }

    return 0;
}
