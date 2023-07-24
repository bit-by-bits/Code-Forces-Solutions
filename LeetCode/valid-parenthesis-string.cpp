class Solution
{
public:
    bool checkValidString(string s)
    {

        int i = 0;
        int j = 0;

        for (char c : s)
        {
            j = (c == ')') ? j - 1 : j + 1;
            i = (c == '(') ? i + 1 : max(i - 1, 0);
            if (j < 0)
                return false;
        }

        return i == 0;
    }
};