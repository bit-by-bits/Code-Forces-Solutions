class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> ans;
        ans.push_back({1});

        int SIZE = 0;
        vector<int> addend;

        while (ans.size() < numRows)
        {

            addend = {1};
            SIZE = ans.size() - 1;

            for (int i = 0; i < SIZE; i++)
            {
                addend.push_back(ans[SIZE][i] + ans[SIZE][i + 1]);
            }

            addend.push_back(1);
            ans.push_back(addend);
        }

        return ans;
    }
};