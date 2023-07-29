
long long int houseRobberUtil(vector<int> valueAt, bool start, int end) {

    long long int valueTill[N];

    if (start) {
        valueTill[0] = 0;
        valueTill[1] = valueAt[1];
    }

    else {
        valueTill[0] = valueAt[0];
        valueTill[1] = max(valueAt[0], valueAt[1]);
    }

    for (int i = 2; i < end; i++) {
        valueTill[i] = max(valueTill[i - 2] + valueAt[i], valueTill[i - 1]);
    }

    return valueTill[end - 1];
}

long long int houseRobber(vector<int> &valueAt)
{

    int N = valueAt.size();

    if (N == 0) return 0;
    else if (N == 1) return valueAt[0];
    else return max(houseRobberUtil(valueAt, false, N - 1), houseRobberUtil(valueAt, true, N));
}
