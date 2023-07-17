class Solution
{
public:
    long long subArrayRanges(vector<int> &nums)
    {
        int n = nums.size();
        long long sum = 0;
        stack<int> st;
        vector<int> minPrev(n, -1), minNext(n, n), maxPrev(n, -1), maxNext(n, n);

        for (int i = 0; i < n; i++)
        {
            while (st.size() && nums[st.top()] >= nums[i])
                st.pop();
            if (st.size())
                minPrev[i] = st.top();
            st.push(i);
        }

        while (st.size())
            st.pop();

        for (int i = n - 1; i >= 0; i--)
        {
            while (st.size() && nums[st.top()] > nums[i])
                st.pop();
            if (st.size())
                minNext[i] = st.top();
            st.push(i);
        }

        for (int i = 0; i < n; i++)
        {
            while (st.size() && nums[st.top()] <= nums[i])
                st.pop();
            if (st.size())
                maxPrev[i] = st.top();
            st.push(i);
        }

        while (st.size())
            st.pop();

        for (int i = n - 1; i >= 0; i--)
        {
            while (st.size() && nums[st.top()] < nums[i])
                st.pop();
            if (st.size())
                maxNext[i] = st.top();
            st.push(i);
        }

        for (int i = 0; i < n; i++)
        {
            long long leftMin = i - minPrev[i], rightMin = minNext[i] - i;
            long long leftMax = i - maxPrev[i], rightMax = maxNext[i] - i;
            sum += (leftMax * rightMax - leftMin * rightMin) * nums[i];
        }

        return sum;
    }
};