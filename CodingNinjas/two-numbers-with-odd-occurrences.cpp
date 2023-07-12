vector<int> twoOddNum(vector<int> arr)
{

    int XOR = 0, first = 0;
    for (int x : arr)
        XOR ^= x;

    int lastBit = XOR ^ (XOR-- & XOR++);
    for (int x : arr)
        if (x & lastBit)
            first ^= x;

    int second = XOR ^ first;
    return {max(first, second), min(first, second)};
}