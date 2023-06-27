class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int limit = nums.size(), num = 0;
        unordered_map<int, int> store;

        for (int i = 0; i < limit; i++)
        {
            num = target - nums[i];
            if (store[num])
                return {store[num] - 1, i};
            else
                store[nums[i]] = i + 1;
        }

        return {-1, -1};
    }
};

// for (int i = 0; i < nums.size(); i++)
// {
//     const int num = target - nums[i];

//     for (int j = i + 1; j < nums.size(); j++)
//     {
//         if (nums[j] == num)
//             return {i, j};
//     }
// }
