class Solution
{
public:
    int longestMountain(vector<int> &arr)

    {
        int i = 1, n = arr.size();
        int upper = 0, lower = 0, ans = 0;
        while (i < n)
        {
            upper = 0;
            lower = 0;
            while (i < n && arr[i] == arr[i - 1])
                i++;
            while (i < n && arr[i] > arr[i - 1])
            {
                upper++;
                i++;
            }

            while (i < n && arr[i] < arr[i - 1])
            {
                lower++;
                i++;
            }

            if (upper && lower)
                ans = max(ans, lower + upper + 1);
        }

        return ans;
    }
};