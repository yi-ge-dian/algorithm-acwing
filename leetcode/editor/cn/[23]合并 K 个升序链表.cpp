#include<iostream>
#include<vector>
#include <queue>

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
//    ListNode(int x, ListNode *next) : val(x), next(next) {}
//};

class Solution {
    static bool compare(ListNode *a, ListNode *b) {
        return a->val > b->val;
    }

public:
    ListNode *mergeKLists(vector<ListNode *> &lists) {
        ListNode *dummy = new ListNode(-1);
        ListNode *p = dummy;
        priority_queue<ListNode *, vector<ListNode *>, decltype(&compare)> pq(compare);
        // 把所有的头节点放入优先级队列
        for (int i = 0; i < lists.size(); i++) {
            if (lists[i] != nullptr) {
                pq.push(lists[i]);
            }
        }

        while (!pq.empty()) {
            // 取出最小的节点
            ListNode *node = pq.top();
            pq.pop();
            p->next = node;
            if (node->next != nullptr) {
                pq.push(node->next);
            }
            p = p->next;
        }

        return dummy->next;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
