class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) {
            return false;
        }

        int originalNumber = x;
        long long revNumber = 0;

        while(x > 0) {
            int lastDigit = x % 10;
            revNumber = revNumber * 10 + lastDigit;
            x /= 10;
        }
        return originalNumber == revNumber;
    }
};