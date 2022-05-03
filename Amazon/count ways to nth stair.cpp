#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    // Function to count number of ways to reach the nth stair
    // when order does not matter.
    long long countWays(int m)
    {
        long long ans = 0;
        vector<long long> vt(m + 1, 0);
        vt[0] = 0;
        vt[1] = 1;
        vt[2] = 2;
        for (int i = 3; i <= m; i++)
        {
            vt[i] = vt[i - 2] + 1;
        }

        return vt[m];
    }
};

// { Driver Code Starts.
int main()
{
    // taking count of testcases
    int t;
    cin >> t;

    while (t--)
    {
        // taking stair count
        int m;
        cin >> m;
        Solution ob;
        cout << ob.countWays(m) << endl; // Print the output from our pre computed array
    }
    return 0;
} // } Driver Code Ends