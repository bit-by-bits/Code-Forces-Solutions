int countBits(int N)
{

    int k = N;
    int total = 0;
    while (k)
    {
        total++;
        k >>= 1;
    }

    return total;
}

int countSetBits(int N)
{

    int num = 2, count = 0;
    int snum = 1, M = N + 1;

    int bits = countBits(N);
    for (int i = 1; i <= bits; i++)
    {

        int a = (M / num) * snum;
        int b = (M % num) - snum;

        count += a;
        if (b > 0)
            count += b;

        num *= 2;
        snum *= 2;
    }

    return count;
}