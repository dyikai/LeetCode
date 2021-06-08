class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }
        
        int size = (int)nums.size();
        int pos = 0;
        
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] == nums[pos]) {
                --size;
                continue;
            } else {
                ++pos;
                nums[pos] = nums[i];
            }
        }
        
        return size;
    }
};
