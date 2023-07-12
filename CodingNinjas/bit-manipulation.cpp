int getBit(int num, int i)
{
    return (num & (1 << i)) ? 1 : 0;
}

int setBit(int num, int i)
{
    return (num | (1 << i));
}

int clrBit(int num, int i)
{
    return (num & ~(1 << i));
}

vector<int> bitManipulation(int num, int i)
{
    return {getBit(num, i - 1), setBit(num, i - 1), clrBit(num, i - 1)};
}