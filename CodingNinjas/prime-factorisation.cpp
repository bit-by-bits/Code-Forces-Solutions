int countPrimes(int n)
{

    int count = 0;
    vector<bool> prm(n, true);
    prm[0] = prm[1] = false;

    for (int i = 2; i < n; i++)
    {
        if (prm[i])
        {

            count++;
            for (int j = i; j < n; j += i)
                prm[j] = false;
        }
    }

    return count;
}