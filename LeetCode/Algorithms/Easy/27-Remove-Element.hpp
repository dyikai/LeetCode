class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> vec;
        
        for (int v : nums) {
            if (v != val) {
                vec.push_back(v);
            }
        }
        
        for (int i = 0; i < vec.size(); ++i) {
            nums[i] = vec[i];
        }
        
        return (int)vec.size();
    }
};
