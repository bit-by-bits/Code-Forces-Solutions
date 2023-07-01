class Solution
{
public:
    void threeSum(vector<vector<int>> &ans, vector<int> sortedNums, int startIndex, long long targetKey)
    {

        int SIZE = sortedNums.size();
        for (int k = startIndex + 1; k < SIZE; k++)
        {

            int i = k + 1;
            int j = SIZE - 1;
            long long target = targetKey - sortedNums[k];

            while (i < j)
            {
                int sum = sortedNums[i] + sortedNums[j];

                if (sum < target)
                    i++;
                else if (sum > target)
                    j--;
                else
                {
                    ans.push_back({sortedNums[startIndex], sortedNums[k], sortedNums[i], sortedNums[j]});

                    int a = i, b = j;
                    while (i < j && sortedNums[i] == sortedNums[a])
                        i++;
                    while (i < j && sortedNums[j] == sortedNums[b])
                        j--;
                }
            }

            while (k < SIZE - 1 && sortedNums[k + 1] == sortedNums[k])
            {
                k++;
            }
        }
    }

    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {

        int SIZE = nums.size();
        vector<int> sortedNums;
        vector<vector<int>> ans;

        for (auto x : nums)
            sortedNums.push_back(x);
        sort(sortedNums.begin(), sortedNums.end());

        for (int i = 0; i < SIZE; i++)
        {
            threeSum(ans, sortedNums, i, target - sortedNums[i]);
            while (i < SIZE - 1 && sortedNums[i + 1] == sortedNums[i])
            {
                i++;
            }
        }

        return ans;
    }
};