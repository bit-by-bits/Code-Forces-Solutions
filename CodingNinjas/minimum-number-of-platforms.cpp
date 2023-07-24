int calculateMinPatforms(int at[], int dt[], int n)
{

    sort(at, at + n);
    sort(dt, dt + n);

    int i = 0, j = 0;
    int curr = 1, maxm = 1;

    while (i < n && j < n)
    {
        if (at[i] <= dt[j])
            i++, maxm = max(maxm, curr++);
        else
            curr--, j++;
    }

    return maxm;
}