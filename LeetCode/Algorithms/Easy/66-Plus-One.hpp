class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        if (digits.empty()) {
            return digits;
        }
        
        int mod = 0;
        
        for (int i = (int)(digits.size() - 1); i >= 0; --i) {
            if (i == digits.size() - 1) {
                digits[i] += 1;
            }
            if (mod > 0) {
                digits[i] += mod;
                mod = 0;
            }
            mod = digits[i] / 10;
            digits[i] %= 10;
            
            if (mod > 0 && i == 0) {
                digits.insert(digits.begin(), mod);
            }
        }
        
        return digits;
    }
};
