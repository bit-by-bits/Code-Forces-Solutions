class Solution
{
public:
    void generate(int i, vector<int> nums, vector<int> curr, vector<vector<int>> &ans)
    {

        ans.push_back(curr);
        int N = nums.size();

        for (int j = i; j < N; j++)
        {
            if (j > i && nums[j] == nums[j - 1])
                continue;
            curr.push_back(nums[j]);
            generate(j + 1, nums, curr, ans);
            curr.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {

        vector<int> curr;
        vector<int> numss = nums;
        vector<vector<int>> ans;

        sort(numss.begin(), numss.end());
        generate(0, numss, curr, ans);

        return ans;
    }
};