class MedianFinder
{
    priority_queue<long> smol;
    priority_queue<long> bigg;

public:
    void addNum(int num)
    {

        smol.push(num);
        bigg.push(-smol.top());

        smol.pop();
        if (smol.size() < bigg.size())
        {
            smol.push(-bigg.top());
            bigg.pop();
        }
    }

    double findMedian()
    {
        int sml = smol.top();
        int big = bigg.top();

        return smol.size() > bigg.size() ? sml : (sml - big) / 2.0;
    }
};