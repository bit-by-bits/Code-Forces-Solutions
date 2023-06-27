class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {

        // if (nums.size() == 1) return;

        // list<int> temp;
        // for (int i = 0; i < k; i++) {
        //     temp.push_front(nums.back());
        //     nums.pop_back();

        //     if (!nums.size() && i < k - 1) {
        //         nums.insert(nums.begin(), temp.begin(), temp.end());
        //         temp.clear();
        //     }
        // }

        // nums.insert(nums.begin(), temp.begin(), temp.end());

        k = k % nums.size();
        reverse(nums.begin(), nums.begin() + (nums.size() - k));
        reverse(nums.begin() + (nums.size() - k), nums.end());
        reverse(nums.begin(), nums.end());

        return;
    }
};