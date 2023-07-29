class Solution
{
private:
    bool add(int i, int j, vector<vector<int>> &m, string curr, vector<string> &ans)
    {

        const int N = m.size();

        if (!N || i < 0 || i == N || j < 0 || j == N)
            return false;
        else if (i == N - 1 && j == N - 1)
            ans.push_back(curr);
        else
        {

            if (j > 0 && m[i][j - 1])
            {
                m[i][j - 1] = 0;
                add(i, j - 1, m, curr + 'L', ans);
                m[i][j - 1] = 1;
            }

            if (i > 0 && m[i - 1][j])
            {
                m[i - 1][j] = 0;
                add(i - 1, j, m, curr + 'U', ans);
                m[i - 1][j] = 1;
            }

            if (j + 1 < N && m[i][j + 1])
            {
                m[i][j + 1] = 0;
                add(i, j + 1, m, curr + 'R', ans);
                m[i][j + 1] = 1;
            }

            if (i + 1 < N && m[i + 1][j])
            {
                m[i + 1][j] = 0;
                add(i + 1, j, m, curr + 'D', ans);
                m[i + 1][j] = 1;
            }
        }
    }

public:
    vector<string> findPath(vector<vector<int>> &m, int n)
    {

        vector<string> ans;
        if (m[0][0])
        {

            m[0][0] = 0;
            add(0, 0, m, "", ans);
        }

        return ans;
    }
};
