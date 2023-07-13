string prefixToInfixConversion(string &s)
{

    stack<string> stk;
    for (int i = s.size() - 1; i > -1; i--)
    {
        if ('a' <= s[i] && s[i] <= 'z')
        {
            string temp(1, s[i]);
            stk.push(temp);
        }

        else
        {
            string first = stk.top();
            stk.pop();
            string second = stk.top();
            stk.pop();
            stk.push('(' + first + s[i] + second + ')');
        }
    }

    return stk.top();
}
