#include<iostream>
#include<vector>
#include<queue>
#include <list>

using namespace std;

//feat:[146]LRU 缓存
//leetcode submit region begin(Prohibit modification and deletion)
class LRUCache {
    int capacity_;
    unordered_map<int, list<pair<int, int>>::iterator> key_to_iter;
    list<pair<int, int>> cache;
public:
    LRUCache(int capacity) {
        capacity_ = capacity;
    }

    int get(int key) {
        // 如果没有
        if (key_to_iter.find(key) == key_to_iter.end()) {
            return -1;
        }
        // 如果有
        auto node = *key_to_iter[key];
        // 移除链表
        cache.erase(key_to_iter[key]);
        cache.push_front(node);
        // 更新map
        key_to_iter[key] = cache.begin();
        return node.second;
    }

    void put(int key, int value) {
        // 是否存在
        if (key_to_iter.find(key) != key_to_iter.end()) {
            // 更新
            auto iter = key_to_iter[key];
            cache.erase(iter);
            cache.push_front(make_pair(key, value));
            key_to_iter[key] = cache.begin();
        } else {
            // 是否满了
            if (capacity_ == cache.size()) {
                // 移除末尾的元素
                key_to_iter.erase(cache.back().first);
                cache.pop_back();
            }
            cache.push_front(make_pair(key, value));
            key_to_iter[key] = cache.begin();
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
//leetcode submit region end(Prohibit modification and deletion


