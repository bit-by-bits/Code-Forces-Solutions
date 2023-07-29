class Solution
{
public:
    bool canJump(vector<int> &nums)
    {

        int N = nums.size();
        int goal = N - 1;

        for (int i = N - 2; i > -1; i--)
            if (i + nums[i] >= goal)
                goal = i;
        return !goal;
    }
};