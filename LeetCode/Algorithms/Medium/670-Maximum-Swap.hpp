class Solution {
public:
    int maximumSwap(int num) {
        vector<int> arr;
        
        while (num != 0) {
            arr.emplace_back(num % 10);
            num /= 10;
        }
        
        int size = (int)arr.size(), res = 0;
        int *idx = (int *)malloc(size * sizeof(int));
        
        for (int i = 0, j = 0; i < size; ++i) {
            if (arr[i] > arr[j]) {
                j = i;
            }
            idx[i] = j;
        }
        
        for (int i = size - 1; i >= 0; --i) {
            if (arr[idx[i]] != arr[i]) {
                arr[idx[i]] = arr[idx[i]] ^ arr[i];
                arr[i] = arr[idx[i]] ^ arr[i];
                arr[idx[i]] = arr[idx[i]] ^ arr[i];
                break;
            }
        }

        free(idx);
        
        for (int i = size - 1; i >= 0; --i) {
            res = res * 10 + arr[i];
        }
        
        return (int)res;
    }
};