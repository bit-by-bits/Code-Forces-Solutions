class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        int curr = 1, ans = 1, last = INT_MAX;
        const int LIMIT = nums.size();
        if (LIMIT < 2)
            return LIMIT;

        //////// MAPS ////////

        // map<int, int> store;
        // for (auto x : nums)
        //     store[x] = 1;

        // for (auto x : store)
        // {

        //     if (x.first - 1 == last)
        //         curr++;
        //     else
        //         curr = 1;

        //     ans = max(curr, ans);
        //     last = x.first;
        // }

        //////// SETS ////////

        // set<int> store;
        // for (auto x : nums)
        //     store.insert(x);

        // for (auto x : store)
        // {
        //     if (store.find(x - 1) != store.end())
        //         curr++;
        //     else
        //         curr = 1;

        //     ans = max(curr, ans);
        // }

        //////// SORTED VECTOR ////////

        sort(nums.begin(), nums.end());

        for (int i = 1; i < LIMIT; i++)
        {
            if (nums[i] - 1 == nums[i - 1])
                curr++;
            else if (nums[i - 1] == nums[i])
                continue;
            else
                curr = 1;

            ans = max(curr, ans);
        }

        return ans;
    }
};