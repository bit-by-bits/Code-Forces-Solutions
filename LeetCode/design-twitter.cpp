typedef pair<int, int> pi;

class Twitter
{
private:
    int time;
    unordered_map<int, set<pi>> tweets;
    unordered_map<int, set<int>> follows;

public:
    Twitter()
    {
        time = 0;
    }

    void postTweet(int userId, int tweetId)
    {
        tweets[userId].insert({time++, tweetId});
    }

    vector<int> getNewsFeed(int userId)
    {

        priority_queue<pi, vector<pi>, greater<pi>> pq;

        auto y = tweets[userId];
        for (auto i = y.begin(); i != y.end(); i++)
        {
            pq.push(*i);
        }

        for (int x : follows[userId])
        {
            auto y = tweets[x];
            for (auto i = y.begin(); i != y.end(); i++)
            {
                pq.push(*i);
                if (pq.size() > 10)
                    pq.pop();
            }
        }

        vector<int> ans;
        while (pq.size() > 10)
            pq.pop();
        while (pq.size())
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }

    void follow(int followerId, int followeeId)
    {
        follows[followerId].insert(followeeId);
    }

    void unfollow(int followerId, int followeeId)
    {
        follows[followerId].erase(followeeId);
    }
};

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follows(followerId,followeeId);
 * obj->unfollows(followerId,followeeId);
 */