#include <bits/stdc++.h>

void helper(stack<int> &s, int idx)
{
    if (idx >= 0)
    {
        int k = s.top();
        s.pop();
        helper(s, idx - 1);
        if (idx)
            s.push(k);
    }
}

void deleteMiddle(stack<int> &inputStack, int N)
{
    helper(inputStack, N / 2);
}