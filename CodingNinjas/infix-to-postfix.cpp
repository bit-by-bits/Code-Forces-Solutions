#include <stack>

int precision(char ch)
{
    if (ch == '+' || ch == '-')
        return 1;
    else if (ch == '*' || ch == '/')
        return 2;
    else if (ch == '^')
        return 3;
    else
        return -1;
}

string infixToPostfix(string exp)
{

    string result;
    stack<char> ops;

    int N = exp.length();
    for (int i = 0; i < N; i++)
    {

        char ch = exp[i];
        if (ch == '(')
            ops.push(ch);

        else if (ch >= '0' && ch <= '9' || ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
        {
            result += ch;
        }

        else if (ch == ')')
        {
            while (ops.top() != '(')
            {
                result += ops.top();
                ops.pop();
            }
            ops.pop();
        }

        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^')
        {
            while (ops.size() && ops.top() != '(' && precision(ch) <= precision(ops.top()))
            {
                result += ops.top();
                ops.pop();
            }
            ops.push(ch);
        }
    }

    while (ops.size())
    {
        result += ops.top();
        ops.pop();
    }

    return result;
}