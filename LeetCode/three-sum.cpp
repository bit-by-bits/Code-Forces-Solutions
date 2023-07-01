class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {

        int SIZE = nums.size();
        vector<int> sortedNums;
        vector<vector<int>> ans;

        for (auto x : nums)
            sortedNums.push_back(x);
        sort(sortedNums.begin(), sortedNums.end());

        for (int k = 0; k < SIZE; k++)
        {

            int i = k + 1;
            int j = SIZE - 1;
            int target = -sortedNums[k];

            while (i < j)
            {
                int sum = sortedNums[i] + sortedNums[j];

                if (sum < target)
                    i++;
                else if (sum > target)
                    j--;
                else
                {

                    ans.push_back(
                        {sortedNums[k], sortedNums[i], sortedNums[j]});

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

        return ans;
    }
};