int gcd(int a, int b)
{
    if (b > a)
        return gcd(b, a);

    else if (b == 0)
        return a;
    else
        return gcd(a % b, b);
}
