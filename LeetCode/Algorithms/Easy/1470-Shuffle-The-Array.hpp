class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int front = n - 1;
        int back = 2 * n - 2;

        int last = nums.back();
        nums.pop_back();

        vector<int>::iterator pos = nums.begin();
        
        for (int i = back; front > 0;) {
            nums.insert(pos + front, nums[i]);
            nums.pop_back();
            --front;
        }
        nums.push_back(last);
        
        return nums;
    }
};

// class Solution {
// public:
//     vector<int> shuffle(vector<int>& nums, int n) {
//         vector<int> res(2 * n);
//         for(int i = 0; i < n; i++){
//             res[2 * i] = nums[i];
//             res[2 * i + 1] = nums[i + n];
//         }
//         return res;
//     }
// };
