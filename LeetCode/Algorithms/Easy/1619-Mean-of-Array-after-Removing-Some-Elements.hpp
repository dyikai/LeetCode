class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int size = arr.size();
        int sum = 0;

        for (int i = size / 20; i < size * 0.95; ++i)
        {
            sum += arr[i];
        }

        return sum / (size * 0.9);
    }
};