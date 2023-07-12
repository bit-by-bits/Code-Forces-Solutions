class Solution
{
public:
    void comb(int j, int n, int k, vector<bool> ds, vector<int> curr, vector<vector<int>> &ans)
    {

        if (!k && !n)
            ans.push_back(curr);
        if (k <= 0 || n <= 0)
            return;

        for (int i = j; i < 9; i++)
        {
            if (ds[i] && n >= (i + 1))
            {
                ds[i] = false;

                curr.push_back(i + 1);
                comb(j + 1, n - (i + 1), k - 1, ds, curr, ans);
                curr.pop_back();
            }
        }
    }

    vector<vector<int>> combinationn3(int k, int n)
    {
        vector<int> ds;
        vector<bool> ds(9, true);

        vector<vector<int>> ans;
        comb(0, n, k, ds, ds, ans);
        return ans;
    }
};