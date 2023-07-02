class Solution
{
public:
    string largestOddNumber(string num)
    {
        while (num.length() && !((num.back() - '0') % 2))
            num.pop_back();
        return num;
    }
};