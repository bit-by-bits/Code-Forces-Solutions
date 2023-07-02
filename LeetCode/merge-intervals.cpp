class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {

        int SIZE = intervals.size();
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> ans = {intervals[0]};
        for (int i = 1; i < SIZE; i++)
        {
            if (intervals[i][0] <= ans.back()[1])
                ans.back()[1] = max(ans.back()[1], intervals[i][1]);
            else
                ans.push_back(intervals[i]);
        }

        return ans;
    }
};