class Solution
{
public:
    int longestOnes(vector<int> &nums, int k)
    {

        int N = nums.size();

        int str = 0;
        int end = 0;

        int ans = 0;
        int flip = k;

        while (end < N)
        {
            if (nums[end])
            {
                end++;
            }
            else if (flip)
            {
                flip--;
                end++;
            }
            else
            {
                while (str < end && nums[str])
                {
                    str++;
                }

                if (!nums[str])
                {
                    flip++;
                    str++;
                }
            }

            ans = max(ans, end - str);
        }

        return ans;
    }
};