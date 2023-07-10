class Solution
{
private:
    void solve(string digits, int index, string str, string s[], vector<string> &ans)
    {

        if (index >= digits.size())
        {
            if (str.size())
                ans.push_back(str);
        }

        else
        {
            int DIGIT = digits[index] - '0';
            for (int j = 0; j < s[DIGIT].length(); j++)
                solve(digits, index + 1, str + s[DIGIT][j], s, ans);
        }
    }

public:
    vector<string> letterCombinations(string digits)
    {
        string str = "";
        string s[] = {"0", "1", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

        int index = 0;
        vector<string> ans;
        solve(digits, index, str, s, ans);

        return ans;
    }
};