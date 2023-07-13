string preToPost(string s)
{

    stack<string> stk;
    for (int i = s.size() - 1; i > -1; i--)
    {
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
        {
            string first = stk.top();
            stk.pop();
            string second = stk.top();
            stk.pop();
            stk.push(first + second + s[i]);
        }

        else
        {
            string temp(1, s[i]);
            stk.push(temp);
        }
    }

    return stk.top();
}