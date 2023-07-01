int Solution::solve(vector<int> &A, int B)
{

    int count = 0;
    unordered_map<int, int> C;
    int n1 = A.size();

    C[0] = 1;
    int last = 0;

    for (int i = 0; i < n1; i++)
    {
        last ^= A[i];

        if (C[B ^ last])
        {
            count += C[B ^ last];
        }

        C[last]++;
    }

    return count;
}