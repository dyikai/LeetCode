class Solution {
public:
	int preimageSizeFZF(int k) {
        if (k <= 1)
		{
			return 5;
		}

		return f(k) - f(k - 1);
	}

	int f(int x) {
		long l = 0, r = (long)1e10;

		while (l < r)
		{
			long mid = (l + r + 1) >> 1;
			if (getCnt(mid) <= x)
			{
				l = mid;
			}
			else
			{
				r = mid - 1;
			}
		}

		return (int)r;
	}

	long getCnt(long x) {
		long res = 0;
		 
		while (x != 0) {
			res += x / 5;
			x /= 5;
		}

		return res;
	}
};