class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        const int LIMIT = nums.size();

        if (LIMIT == 0 || LIMIT == 1)
            return LIMIT;

        map<int, int> store;
        int curr = 1, ans = 1, last = INT_MAX;

        for (auto x : nums)
            store[x] = 1;
        for (auto x : store)
        {

            if (x.first - 1 == last)
                curr++;
            else
                curr = 1;

            ans = max(curr, ans);
            last = x.first;
        }

        return ans;
    }
};