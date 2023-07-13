#include <stack>
string postfixToPrefix(string &s)
{

    stack<string> stk;
    for (char c : s)
    {
        if (c == '+' || c == '-' || c == '*' || c == '/')
        {
            string first = stk.top();
            stk.pop();
            string second = stk.top();
            stk.pop();
            stk.push(c + second + first);
        }

        else
        {
            string temp(1, c);
            stk.push(temp);
        }
    }

    return stk.top();
}