class Solution
{
public:
    void comb(int idx, int tgt, vector<int> cand, vector<int> curr, vector<vector<int>> &ans)
    {

        if (0 == tgt)
            ans.push_back(curr);

        int N = cand.size();
        for (int i = idx; i < N; i++)
        {
            if (cand[i] > tgt)
                break;
            else if (i > idx && cand[i - 1] == cand[i])
                continue;

            curr.push_back(cand[i]);
            comb(i + 1, tgt - cand[i], cand, curr, ans);
            curr.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
    {

        vector<int> ds;
        vector<vector<int>> ans;

        vector<int> cand = candidates;
        sort(cand.begin(), cand.end());

        comb(0, target, cand, ds, ans);
        return ans;
    }
};