class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;
        
        for (int i = 0, j = 0; i < pushed.size(); ++i) {
            st.emplace(pushed[i]);
            
            while (!st.empty() && st.top() == popped[j]) {
                ++j;
                st.pop();
            }
        }
        
        return st.empty();
    }
};
