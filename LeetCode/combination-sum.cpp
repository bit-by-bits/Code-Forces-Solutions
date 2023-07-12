class Solution
{
public:
    void comb(int idx, int tgt, vector<int> cand, vector<int> curr, vector<vector<int>> &ans)
    {

        if (0 == tgt)
            ans.push_back(curr);
        if (0 >= tgt || idx >= cand.size())
            return;

        comb(idx + 1, tgt, cand, curr, ans);

        int i = cand[idx];
        if (tgt >= i)
        {
            curr.push_back(i);
            comb(idx, tgt - i, cand, curr, ans);
        }
    }

    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {

        set<int> store;
        vector<int> temp2;
        vector<vector<int>> ans;

        vector<int> temp1 = candidates;
        sort(temp1.begin(), temp1.end());

        comb(0, target, temp1, temp2, ans);
        return ans;
    }
};