int find(int idx, stack<int> &stk, int sml)
{

    if (!idx)
    {
        stk.push(sml);
        return sml;
    }

    else
    {

        int k = stk.top();
        stk.pop();

        int sm = find(idx - 1, stk, min(k, sml));
        if (k >= sml || (k < sml && k > sm))
            stk.push(k);
        return min(sm, k);
    }
}

void SortedStack ::sort()
{
    for (int i = s.size(); i > 0; i--)
        find(i, s, INT_MAX);
}