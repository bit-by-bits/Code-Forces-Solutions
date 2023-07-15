class Solution
{
public:
    vector<int> maxSlidingWindow(vector<int> &nums, int k)
    {

        int i = 0;
        int N = nums.size();

        map<int, int> count;
        for (; i < k; i++)
            count[nums[i]]++;

        vector<int> ans;
        ans.push_back((count.rbegin())->first);

        for (; i < N; i++)
        {

            int last = nums[i - k];
            if (count[last] && count[last] == 1)
                count.erase(last);
            else
                count[last]--;

            count[nums[i]]++;
            ans.push_back((count.rbegin())->first);
        }

        return ans;
    }
};