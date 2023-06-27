// class Solution
// {
// public:
//     void sortColors(vector<int> &nums)
//     {
//         int low = 0, mid = 0, high = nums.size() - 1;
//         while (mid <= high)
//         {
//             if (nums[mid] == 0)
//             {
//                 swap(nums[low], nums[mid]);
//                 low++;
//                 mid++;
//             }
//             else if (nums[mid] == 1)
//             {
//                 mid++;
//             }
//             else
//             {
//                 swap(nums[mid], nums[high]);
//                 high--;
//             }
//         }
//     }
// };

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {

        int store[3] = {0};
        int SIZE = nums.size();

        for (int i = 0; i < SIZE; i++)
        {
            store[nums[i]]++;
        }

        int i = 0;
        SIZE = store[0];
        for (; i < SIZE; i++)
        {
            nums[i] = 0;
        }

        SIZE += store[1];
        for (; i < SIZE; i++)
        {
            nums[i] = 1;
        }

        SIZE += store[2];
        for (; i < SIZE; i++)
        {
            nums[i] = 2;
        }

        return;
    }
};