#include<iostream>
#include<vector>
#include<queue>
#include<unordered_map>
#include<list>
#include<stack>

using namespace std;

//feat: [155]最小栈
//leetcode submit region begin(Prohibit modification and deletion)
class MinStack {
    stack<int> st;
    stack<int> min_st;
public:
    MinStack() {

    }
    
    void push(int val) {
        st.push(val);
        if (min_st.empty()){
            min_st.push(val);
            return;
        }
        if (val <= min_st.top()){
            min_st.push(val);
        }
    }
    
    void pop() {
        int tmp = st.top();
        st.pop();
        if (tmp == min_st.top()){
            min_st.pop();
        }
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return min_st.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
//leetcode submit region end(Prohibit modification and deletion)
