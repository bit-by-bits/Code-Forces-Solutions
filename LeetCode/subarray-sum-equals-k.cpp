class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {

        int SIZE = nums.size();
        unordered_map<int, int> store;

        int ans = 0;
        int temp = 0;

        store[0] = 1;
        for (int i = 0; i < SIZE; i++)
        {
            temp += nums[i];
            ans += store[temp - k];
            store[temp]++;
        }

        return ans;
    }
};