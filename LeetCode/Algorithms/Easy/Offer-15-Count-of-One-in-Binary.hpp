class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        uint32_t value = n;
        
        for (int i = 0; i < 32; ++i) {
            count += (n & 1);
            n >>= 1;
        }
        
        return count;
    }
};
