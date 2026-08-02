// 


class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;
        int duplicate = x;
        long long reverse = 0;
        while (x > 0) {
            int lastdigit = x % 10;
            reverse = reverse * 10 + lastdigit;
            x /= 10;
        }
        return duplicate == reverse;
    }
};