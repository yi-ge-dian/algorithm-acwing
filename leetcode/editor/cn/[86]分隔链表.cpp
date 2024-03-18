#include<iostream>
#include<vector>

using namespace std;
//leetcode submit region begin(Prohibit modification and deletion)
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

//struct ListNode {
//    int val;
//    ListNode *next;
//
//    ListNode() : val(0), next(nullptr) {}
//
//    ListNode(int x) : val(x), next(nullptr) {}
//
//    ListNode(int x, ListNode *next) : val(x), next(nullptr) {}
//};

class Solution {
public:
    ListNode *partition(ListNode *head, int x) {
        // 存放 <= x
        ListNode *dummy1 = new ListNode(-1);
        // 存放 >= x
        ListNode *dummy2 = new ListNode(-1);
        ListNode *p1 = dummy1;
        ListNode *p2 = dummy2;

        ListNode *p = head;
        while (p != nullptr) {
            if (p->val < x) {
                p1->next = p;
                p1 = p1->next;
            } else {
                p2->next = p;
                p2 = p2->next;
            }

            ListNode *tmp = p->next;
            p->next = nullptr;
            p = tmp;
        }

        p1->next = dummy2->next;

        return dummy1->next;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
