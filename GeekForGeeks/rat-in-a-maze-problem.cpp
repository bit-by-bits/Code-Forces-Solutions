
class Solution
{
private:
    void solve(vector<vector<int>> m, int n, int i, int j, string &temp, vector<string> &ans)
    {
        if (i >= n || j >= n || i < 0 || j < 0)
        {
            return;
        }
        else if (i == n - 1 && j == n - 1)
        {
            ans.push_back(temp);
            return;
        }

        if (i > 0 && m[i - 1][j])
        {
            m[i - 1][j] = 0;
            temp.push_back('U');
            solve(m, n, i - 1, j, temp, ans);
            temp.pop_back();
            m[i - 1][j] = 1;
        }

        if (i < n - 1 && m[i + 1][j])
        {
            m[i + 1][j] = 0;
            temp.push_back('D');
            solve(m, n, i + 1, j, temp, ans);
            temp.pop_back();
            m[i + 1][j] = 1;
        }

        if (j > 0 && m[i][j - 1])
        {
            m[i][j - 1] = 0;
            temp.push_back('L');
            solve(m, n, i, j - 1, temp, ans);
            temp.pop_back();
            m[i][j - 1] = 1;
        }

        if (j < n - 1 && m[i][j + 1])
        {
            m[i][j + 1] = 0;
            temp.push_back('R');
            solve(m, n, i, j + 1, temp, ans);
            temp.pop_back();
            m[i][j + 1] = 1;
        }
    }

public:
    vector<string> findPath(vector<vector<int>> &m, int n)
    {
        int i = 0;
        int j = 0;
        vector<string> ans;
        string temp = "";

        if (m[0][0] && m[n - 1][n - 1])
        {
            m[0][0] = 0;

            solve(m, n, i, j, temp, ans);
        }

        return ans;
    }
};
