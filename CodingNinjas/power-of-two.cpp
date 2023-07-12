bool isPowerOfTwo(int n)
{
    return !(n-- & n);
}