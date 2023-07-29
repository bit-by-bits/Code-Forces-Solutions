#include <algorithm>

bool compare(vector<int> &job1, vector<int> &job2)
{
    return job1[2] > job2[2];
}

vector<int> jobScheduling(vector<vector<int>> &jobs)
{

    sort(jobs.begin(), jobs.end(), compare);

    int maxProfit = 0;
    int maxDeadline = 0;
    int numberOfJobs = 0;

    for (int i = 0; i < jobs.size(); i++)
        maxDeadline = max(maxDeadline, jobs[i][1]);

    bool slots[maxDeadline + 1];
    for (int i = 0; i <= maxDeadline; i++)
        slots[i] = false;

    for (int i = 0; i < jobs.size(); i++)
    {
        for (int j = jobs[i][1]; j > 0; j--)
        {

            if (slots[j] == false)
            {
                maxProfit += jobs[i][2];
                numberOfJobs++;
                slots[j] = true;
                break;
            }
        }
    }

    return {numberOfJobs, maxProfit};
}