class Solution
{
public:
    long long toh(int N, int from, int to, int aux)
    {

        int x = 0;
        if (N == 1)
            cout << "move disk " << N << " from rod " << from << " to rod " << to << endl;
        else
        {
            x = toh(N - 1, from, aux, to);
            cout << "move disk " << N << " from rod " << from << " to rod " << to << endl;
            x += toh(N - 1, aux, to, from);
        }

        return 1 + x;
    }
};