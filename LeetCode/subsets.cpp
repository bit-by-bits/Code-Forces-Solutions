class Solution
{
public:
    void subs(int idx, vector<int> nums, vector<int> curr, vector<vector<int>> &ans)
    {

        if (idx == nums.size())
            ans.push_back(curr);
        else
        {
            subs(idx + 1, nums, curr, ans);
            curr.push_back(nums[idx]);
            subs(idx + 1, nums, curr, ans);
        }
    }

    vector<vector<int>> subsets(vector<int> &nums)
    {

        vector<int> curr;
        vector<vector<int>> ans;

        // int M = nums.size();
        // int N = 1 << M;

        // for (int i = 0; i < N; i++) {
        //     for (int j = 0; j < M; j++) {
        //         if (i & (1 << j)) {
        //             curr.push_back(nums[j]);
        //         }
        //     }

        //     ans.push_back(curr);
        //     curr = {};
        // }

        subs(0, nums, curr, ans);
        return ans;
    }
};