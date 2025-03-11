
//code by master
#include <iostream>
#include <vector>
using namespace std;
bool isSafe(vector<vector<int>> &data, vector<vector<bool>> &marking, int row, int col, int i, int j)
{
    if ((i >= 0 && i < row) && (j >= 0 && j < col) && marking[i][j] == 0 && data[i][j] == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void solution(vector<vector<int>> &data, vector<vector<bool>> &marking, int row, int col, int i, int j, string output, vector<string> &path)
{
    if (i == row - 1 && j == col - 1)
    {
        path.push_back(output);
        return;
    }
    // Move down
    if (isSafe(data, marking, row, col, i + 1, j))
    {
        // Mark the current cell as visited
        marking[i + 1][j] = 1;

        solution(data, marking, row, col, i + 1, j, output + 'D', path);
        // Unmark the current cell (backtracking)
        marking[i + 1][j] = 0;
    }
    // Move right
    if (isSafe(data, marking, row, col, i, j + 1))
    {
        // Mark the current cell as visited
        marking[i][j + 1] = 1;

        solution(data, marking, row, col, i, j + 1, output + 'R', path);
        // Unmark the current cell (backtracking)
        marking[i][j + 1] = 0;
    }
    // Move Up
    if (isSafe(data, marking, row, col, i - 1, j))
    {
        // Mark the current cell as visited
        marking[i - 1][j] = 1;

        solution(data, marking, row, col, i - 1, j, output + 'U', path);
        // Unmark the current cell (backtracking)
        marking[i - 1][j] = 0;
    }
    // Move left
    if (isSafe(data, marking, row, col, i, j - 1))
    {
        // Mark the current cell as visited
        marking[i][j - 1] = 1;

        solution(data, marking, row, col, i, j - 1, output + 'L', path);
        // Unmark the current cell (backtracking)
        marking[i][j - 1] = 0;
    }
    return;
}

int main()
{

    vector<vector<int>> data{{1, 1, 1, 1}, {1, 1, 1, 1}, {0, 0, 1, 0}, {0, 0, 1, 1}};

    vector<vector<bool>> marking(4, vector<bool>(4, 0));
    marking[0][0] = 1;
    int i = 0;
    int j = 0;
    int row = 4;
    int col = 4;
    string output = "";

    vector<string> path;
    solution(data, marking, row, col, i, j, output, path);
    for (auto value : path)
    {
        cout << value << " ";
    }
    if (path.size() == 0)
    {
        cout << "NO Path is possible.";
    }

    return 0;
}

// //same code with comment by chatgpt

// #include <iostream>
// #include <vector>
// using namespace std;

// bool isSafe(vector<vector<int>> &data, vector<vector<bool>> &marking, int row, int col, int i, int j)
// {
//     // Check if the cell is within bounds, not yet visited, and has a value of 1
//     return ((i >= 0 && i < row) && (j >= 0 && j < col) && (marking[i][j] == 0) && data[i][j] == 1);
// }

// void solution(vector<vector<int>> &data, vector<vector<bool>> &marking, int row, int col, int i, int j, string output, vector<string> &path)
// {
//     // If the bottom-right corner is reached, add the path to the list
//     if (i == row - 1 && j == col - 1)
//     {
//         path.push_back(output);
//         return;
//     }

//     // // Mark the current cell as visited
//     // marking[i][j] = true;

//     // Move down
//     if (isSafe(data, marking, row, col, i + 1, j))
//     {
//         // Mark the current cell as visited
//         marking[i + 1][j] = true;
//         solution(data, marking, row, col, i + 1, j, output + 'D', path);
//         // Unmark the current cell (backtracking)
//         marking[i + 1][j] = false;
//     }
//     // Move right
//     if (isSafe(data, marking, row, col, i, j + 1))
//     {
//         // Mark the current cell as visited
//         marking[i][j + 1] = true;
//         solution(data, marking, row, col, i, j + 1, output + 'R', path);
//         // Unmark the current cell (backtracking)
//         marking[i][j + 1] = false;
//     }
//     // Move up
//     if (isSafe(data, marking, row, col, i - 1, j))
//     {
//         // Mark the current cell as visited
//         marking[i - 1][j] = true;
//         solution(data, marking, row, col, i - 1, j, output + 'U', path);
//         // Unmark the current cell (backtracking)
//         marking[i - 1][j] = false;
//     }
//     // Move left
//     if (isSafe(data, marking, row, col, i, j - 1))
//     {
//         // Mark the current cell as visited
//         marking[i][j - 1] = true;
//         solution(data, marking, row, col, i, j - 1, output + 'L', path);
//         // Unmark the current cell (backtracking)
//         marking[i][j - 1] = false;
//     }
// }

// int main()
// {
//     vector<vector<int>> data{{1, 1, 1, 1}, {1, 1, 1, 1}, {0, 0, 1, 0}, {0, 0, 1, 1}};
//     vector<vector<bool>> marking(4, vector<bool>(4, false));
//     marking[0][0] = true;
//     if (data[0][0] == 0)
//     {
//         cout << "No path possible." << endl;
//     }
//     int row = 4;
//     int col = 4;
//     vector<string> path;

//     // Start from the top-left corner
//     solution(data, marking, row, col, 0, 0, "", path);

//     // Print all paths
//     for (auto value : path)
//     {
//         cout << value << " ";
//     }

//     return 0;
// }
