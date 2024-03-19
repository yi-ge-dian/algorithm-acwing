#include<iostream>
#include<vector>
#include<queue>

using namespace std;
//feat: [83]删除排序链表中的重复元素
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
class Solution {
public:
    ListNode *deleteDuplicates(ListNode *head) {
        if (head == nullptr) return nullptr;
        ListNode *slow = head;
        ListNode *fast = head;
        while (fast != nullptr) {
            if (slow->val != fast->val) {
                slow->next = fast;
                slow = slow->next;
            }
            fast = fast->next;
        }
        slow->next = nullptr;
        return head;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
