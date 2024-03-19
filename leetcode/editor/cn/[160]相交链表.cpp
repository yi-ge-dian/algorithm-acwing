#include<iostream>
#include<vector>
#include<queue>

using namespace std;
//相交链表
//leetcode submit region begin(Prohibit modification and deletion)
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *p1 = headA;
        ListNode *p2 = headB;
        while (p1 != p2) {
            if (p1 == nullptr) p1 = headB;
            else p1 = p1->next;
            if (p2 == nullptr) p2 = headA;
            else p2 = p2->next;
        }

        return p1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
