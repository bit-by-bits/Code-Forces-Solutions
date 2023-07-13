class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {

        int n1 = nums1.size(), n2 = nums2.size() - 1;
        if (!n1 || n2 < 0)
            return {};

        map<int, int> store;
        for (int x : nums2)
            store[x] = -1;

        stack<int> stk;
        for (int i = n2; i > -1; i--)
        {
            while (!stk.empty() && nums2[i] >= stk.top())
                stk.pop();
            if (!stk.empty())
                store[nums2[i]] = stk.top();
            stk.push(nums2[i]);
        }

        vector<int> ans;
        for (int x : nums1)
            ans.push_back(store[x]);
        return ans;
    }
};