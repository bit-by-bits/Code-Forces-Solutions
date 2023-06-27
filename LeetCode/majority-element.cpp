class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {

        int SIZE = nums.size();

        // unordered_map<int, int> store;
        // for (int i = 0; i < SIZE; i++) {
        //     store[nums[i]]++;
        // }

        // pair<int, int> y = {-1, 0};
        // for (auto x: store) {
        //     if (x.second > y.second) {
        //         y = {x.first, x.second};
        //     }
        // }

        // return y.first;

        int lastEle = 0, lastCount = 0;
        for (int i = 0; i < SIZE; i++)
        {
            if (!lastCount)
            {
                lastCount = 1;
                lastEle = nums[i];
            }

            else
            {
                if (lastEle == nums[i])
                {
                    lastCount++;
                }
                else
                {
                    lastCount--;
                }
            }
        }

        lastCount = 0;
        for (int i = 0; i < SIZE; i++)
        {
            if (nums[i] == lastEle)
            {
                lastCount++;
            }
        }

        return (lastCount >= SIZE / 2) ? lastEle : -1;
    }
};