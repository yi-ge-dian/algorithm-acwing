//
// Created by wenlong dong on 2024/3/22.
//
#include <iostream>
#include <vector>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(-1), next(nullptr) {}

    ListNode(int val) : val(val), next(nullptr) {}

    ListNode(int val, ListNode *next) : val(val), next(next) {}
};

ListNode *create(vector<int> arr) {
    auto dummy = new ListNode();
    auto cur = dummy;
    for (int i = 0; i < arr.size(); i++) {
        auto new_node = new ListNode(arr[i]);
        cur->next = new_node;
        cur = cur->next;
    }
    return dummy;
}

void print(ListNode *head) {
    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }
}


int main() {
    int n;
    cin >> n;
    vector<int> in;
    for (int i = 0; i < n; ++i) {
        in.push_back(i);
    }
    auto dummy = create(in);

    print(dummy->next);
}
