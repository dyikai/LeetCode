class Solution {
public:
    int mySqrt(int x) {
        double self = 3;

        for (int i = 0; i < 100; i++)
        {
            self = (self + x / self) / 2;
        }

        return (int)self;
    }
};