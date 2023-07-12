void swapNumber(int &x, int &y)
{
    x ^= y;
    y ^= x;
    x ^= y;
}