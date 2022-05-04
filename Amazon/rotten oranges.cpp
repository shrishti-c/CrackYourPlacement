class Solution
{
public:
    vector<int> dx = {0, 0, 1, -1};
    vector<int> dy = {1, -1, 0, 0};

    int orangesRotting(vector<vector<int>> &grid)

    {
        queue<pair<int, int>> qt;
        int count = 0, totcount = 0;
        int m = grid.size(), n = grid[0].size();

        vector<vector<int>> vis(m, vector<int>(n, -1));

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == 2)
                {
                    qt.push({i, j});
                    vis[i][j] = 1;
                }

                if (grid[i][j] == 2 || grid[i][j] == 1)
                    totcount++;

                if (grid[i][j] == 0)
                    vis[i][j] = 1;
            }
        }

        int t = 0;
        while (!qt.empty())
        {
            int s = qt.size();
            for (int i = 0; i < s; i++)
            {
                auto k = qt.front();
                qt.pop();

                count++;
                int x = k.first, y = k.second;
                for (int i = 0; i < 4; i++)
                {
                    int x1 = x + dx[i];
                    int y1 = y + dy[i];

                    if (x1 < 0 || y1 < 0 || x1 >= m || y1 >= n || vis[x1][y1] == 1)
                        continue;

                    vis[x1][y1] = 1;
                    qt.push({x1, y1});
                }
            }
            t++;
        }
        if (totcount == 0)
            return 0;

        if (count != totcount)
            return -1;

        return t - 1;
    }
};