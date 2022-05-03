#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k)

    {
        priority_queue<pair<int, int>, vector<pair<int, int>>> pq;
        int j = 0;
        vector<int> vt;
        for (int i = 0; i < k; i++)
        {
            pq.push({arr[i], i});
        }

        vt.push_back(pq.top().first);

        for (int i = k; i < n; i++)
        {

            while (!pq.empty() && pq.top().second <= j)
            {
                pq.pop();
            }

            pq.push({arr[i], i});
            vt.push_back(pq.top().first);
            j++;
        }

        return vt;
    }
};

// { Driver Code Starts.

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        vector<int> res = ob.max_of_subarrays(arr, n, k);
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }

    return 0;
} // } Driver Code Ends