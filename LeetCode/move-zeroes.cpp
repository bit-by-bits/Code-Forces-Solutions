class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {

        int i = 0;
        // int end = nums.size();

        // while (i < end) {
        //     if (nums[i] == 0) {
        //         nums.erase(nums.begin() + i);
        //         nums.push_back(0);

        //         end--;
        //     }

        //     else i++;
        // }

        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[j])
                nums[i++] = nums[j];
        }

        for (; i < nums.size(); i++)
        {
            nums[i] = 0;
        }

        return;
    }
};