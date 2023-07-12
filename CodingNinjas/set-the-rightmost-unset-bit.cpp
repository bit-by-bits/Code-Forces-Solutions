int setBits(int N)
{
    return (N++ & N--) ? (N++ | N) : N;
}