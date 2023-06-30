class Solution
{
public:
    vector<int> leaders(int arr[], int n)
    {

        vector<int> ans;
        int currMax = INT_MIN;

        for (int i = n - 1; i > -1; i--)
        {
            if (arr[i] >= currMax)
            {
                currMax = arr[i];
                ans.push_back(arr[i]);
            }
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};