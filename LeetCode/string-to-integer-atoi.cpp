class Solution
{
public:
    int myAtoi(string s)
    {

        int ans = 0;
        bool pos = true;
        string num = "";

        int i = 0;
        while (s[i] == ' ')
            i++;

        if (s[i] == '+')
            i++;
        else if (s[i] == '-')
            i++, pos = false;

        int SIZE = s.length();
        while (i < SIZE && ('0' <= s[i] && s[i] <= '9'))
        {
            num += s[i++];
        }

        i = 0, SIZE = num.length();
        while (i < SIZE)
        {

            if ((pos && ans >= (2147483647 - (num[i] - '0')) / 10.0) || (!pos && ans >= (2147483648 - (num[i] - '0')) / 10.0))
            {
                return pos ? INT_MAX : INT_MIN;
            }

            else
            {
                ans *= 10;
                ans += (num[i++] - '0');
            }
        }

        return pos ? ans : -ans;
    }
};