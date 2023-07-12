class Solution
{
public:
    void create(int zro, int one, int left, string str, vector<string> &ans)
    {

        if (!left)
            ans.push_back(str);
        else
        {
            create(zro, one + 1, left - 1, str + '1', ans);
            if (one > zro)
                create(zro + 1, one, left - 1, str + '0', ans);
        }
    }

    vector<string> NBitBinary(int N)
    {

        vector<string> ans;
        create(0, 1, N - 1, "1", ans);
        sort(ans.begin(), ans.end(), greater<string>());
        return ans;
    }
};