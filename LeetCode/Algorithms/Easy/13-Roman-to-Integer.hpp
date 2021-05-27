#include <map>
#include <string>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        int tmp = 0;
        
        for (int i = (int)(s.length() - 1); i >= 0; --i) {
            int num = this->value(s[i]);
            if (num < tmp) {
                sum -= num;
            } else {
                sum += num;
            }
            
            tmp = num;
        }
        
        return sum;
    }

private:
    int value(char character) {
        switch (character) {
            case 'I':
                return 1;
                break;
                
            case 'V':
                return 5;
                break;
                
            case 'X':
                return 10;
                break;
                
            case 'L':
                return 50;
                break;
                
            case 'C':
                return 100;
                break;
                
            case 'D':
                return 500;
                break;
                
            case 'M':
                return 1000;
                break;
                
            default:
                return 0;;
        }
    }
};
