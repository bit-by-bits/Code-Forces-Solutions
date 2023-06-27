
// class Solution
// {
// private:
//     int allEmpty(unordered_map<int, int> sizes)
//     {
//         for (auto x : sizes)
//         {
//             if (x.second)
//                 return x.first;
//         }

//         return -1;
//     }

// public:
//     ListNode *mergeKLists(vector<ListNode *> &lists)
//     {

//         unordered_map<int, int> sizes;
//         const int SIZE = lists.size();

//         int currLen = 0;
//         ListNode *lengthFinder = NULL;
//         if (!SIZE)
//             return lengthFinder;

//         for (int i = 0; i < SIZE; i++)
//         {

//             currLen = 0;
//             lengthFinder = lists[i];

//             while (lengthFinder != NULL)
//             {
//                 currLen++;
//                 lengthFinder = lengthFinder->next;
//             }

//             sizes[i] = currLen;
//         }

//         ListNode *newHead = NULL;
//         ListNode *newTail = NULL;

//         int currMin = allEmpty(sizes);
//         if (currMin != -1)
//         {
//             ListNode *minFinder = lists[currMin];

//             for (int i = 0; i < SIZE; i++)
//             {
//                 if (sizes[i] && lists[i]->val < minFinder->val)
//                 {
//                     currMin = i;
//                     minFinder = lists[i];
//                 }
//             }

//             sizes[currMin]--;
//             newHead = minFinder;
//             newTail = minFinder;
//             lists[currMin] = minFinder->next;
//             newTail->next = NULL;

//             currMin = allEmpty(sizes);
//             while (currMin != -1)
//             {
//                 minFinder = lists[currMin];

//                 for (int i = 0; i < SIZE; i++)
//                 {
//                     if (sizes[i] && lists[i]->val < minFinder->val)
//                     {
//                         currMin = i;
//                         minFinder = lists[i];
//                     }
//                 }

//                 sizes[currMin]--;
//                 if (!sizes[currMin])
//                     sizes.erase(currMin);

//                 newTail->next = minFinder;
//                 lists[currMin] = minFinder->next;
//                 newTail = newTail->next;
//                 newTail->next = NULL;

//                 currMin = allEmpty(sizes);
//             }
//         }

//         return newHead;
//     }
// };

ListNode *mergeKLists(vector<ListNode *> &lists)
{
    if (lists.empty())
    {
        return nullptr;
    }
    while (lists.size() > 1)
    {
        lists.push_back(mergeTwoLists(lists[0], lists[1]));
        lists.erase(lists.begin());
        lists.erase(lists.begin());
    }
    return lists.front();
}
ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
{
    if (l1 == nullptr)
    {
        return l2;
    }
    if (l2 == nullptr)
    {
        return l1;
    }
    if (l1->val <= l2->val)
    {
        l1->next = mergeTwoLists(l1->next, l2);
        return l1;
    }
    else
    {
        l2->next = mergeTwoLists(l1, l2->next);
        return l2;
    }
}