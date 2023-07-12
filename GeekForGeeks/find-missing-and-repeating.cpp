class Solution
{
public:
    vector<int> findTwoElement(vector<int> arr, int n)
    {

        int count[n] = {0};
        for (auto x : arr)
            count[x - 1]++;

        vector<int> ans = {-1, -1};
        for (int i = 0; i < n; i++)
        {
            if (count[i] == 2)
                ans[0] = i + 1;
            else if (!count[i])
                ans[1] = i + 1;
        }

        return ans;
    }
};