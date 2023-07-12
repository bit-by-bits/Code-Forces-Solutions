class Solution
{
public:
    bool isValid(string s)
    {

        stack<char> check;
        for (char x : s)
        {
            if (x == '(' || x == '{' || x == '[')
                check.push(x);
            else
            {

                if (check.empty())
                    return false;
                char k = check.top();

                if ((x == ')' && k == '(') || (x == '}' && k == '{') || (x == ']' && k == '['))
                    check.pop();
                else
                    return false;
            }
        }

        return check.empty();
    }
};