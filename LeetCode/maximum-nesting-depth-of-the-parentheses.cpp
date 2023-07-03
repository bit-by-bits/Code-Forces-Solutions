class Solution
{
public:
    int maxDepth(string s)
    {

        int SIZE = s.length();
        int curr = 0, ans = 0;

        for (int i = 0; i < SIZE; i++)
        {

            if (s[i] == '(')
                ans = max(ans, ++curr);
            else if (s[i] == ')')
                curr--;
        }

        return ans;
    }
};