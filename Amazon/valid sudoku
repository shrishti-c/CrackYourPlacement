// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

//  Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int isValid(vector<vector<int>> mat)

    {
        unordered_map<int, unordered_set<int>> row, col, box;

        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                if (mat[i][j] == 0)
                    continue;
                if (row[i].find(mat[i][j]) != row[i].end())
                    return false;

                if (col[j].find(mat[i][j]) != col[j].end())
                    return false;

                int p = (i / 3) * 3 + j / 3;

                if (box[p].find(mat[i][j]) != box[p].end())
                    return false;

                row[i].insert(mat[i][j]);
                col[j].insert(mat[i][j]);
                box[p].insert(mat[i][j]);
            }
        }

        return true;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<vector<int>> mat(9, vector<int>(9, 0));
        for (int i = 0; i < 81; i++)
            cin >> mat[i / 9][i % 9];

        Solution ob;
        cout << ob.isValid(mat) << "\n";
    }
    return 0;
} // } Driver Code Ends