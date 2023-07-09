bool check(int k, int i, vector<int> a)
{

    if (!k)
        return true;
    if (i == a.size() || k < 0)
        return !k;
    return check(k - a[i], i + 1, a) || check(k, i + 1, a);
}

bool isSubsetPresent(int n, int k, vector<int> &a)
{
    return check(k, 0, a);
}