
 struct ListNode {
         int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };


class Solution {
public:
    bool isPalindrome(ListNode* head) {
        for (int i = 0; i < head.length() / 2; i++)
        if (head[i] != head[head.length() - 1 - i])
            return false;

    return true;
    }
};