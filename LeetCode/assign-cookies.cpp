class Solution
{
public:
    int findContentChildren(vector<int> &g, vector<int> &s)
    {

        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        const int G = g.size();
        const int S = s.size();

        int j = 0;
        int ans = 0;

        if (G && S)
        {
            for (int i = 0; i < G; i++)
            {
                while (j + 1 < S && g[i] > s[j])
                    j++;
                if (g[i] <= s[j])
                    ans++, j++;
                if (j == S)
                    break;
            }
        }

        return ans;
    }
};