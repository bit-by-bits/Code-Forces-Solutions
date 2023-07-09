class Solution
{
public:
    void generate(int i, vector<int> nums, vector<int> curr, vector<vector<int>> &ans)
    {

        if (i == nums.size())
        {
            ans.push_back(curr);
            return;
        }

        generate(i + 1, nums, curr, ans);
        curr.push_back(nums[i]);
        generate(i + 1, nums, curr, ans);

        return;
    }

    vector<vector<int>> subsets(vector<int> &nums)
    {

        vector<int> curr;
        vector<vector<int>> ret;
        generate(0, nums, curr, ret);

        return ret;
    }
};