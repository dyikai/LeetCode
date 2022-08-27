class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if (nums.size() == 2) {
            return (nums[0] - 1) * (nums[1] - 1);
        }
        
        int max = 0;
        int submax = 0;
        
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] > max) {
                submax = max;
                max = nums[i];
            } else if (nums[i] > submax) {
                submax = nums[i];
            }
        }
        
        return (submax - 1) * (max - 1);
    }
    
//  最笨的办法，相乘找乘积
//    int maxProduct(vector<int>& nums) {
//        int product = 0;
//        int size = nums.size();
//
//        for (int i = 0; i < size; ++i) {
//            for (int j = i + 1; j < size; ++j) {
//                if (product < ((nums[i] - 1) * (nums[j] - 1))) {
//                    product = (nums[i] - 1) * (nums[j] - 1);
//                }
//            }
//        }
//
//        return product;
//    }
};
