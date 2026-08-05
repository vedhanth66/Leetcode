class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers are not palindromes
        if (x < 0) return false;

        int org = x;
        int rev = 0;
        
        while (x != 0) {
            int rem = x % 10;

            // Check for potential overflow before multiplying by 10
            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && rem > 7)) {
                return false;  // Overflow would occur
            }
            
            // Update the reversed number
            rev = rev * 10 + rem;
            x /= 10;
        }

        // Check if the reversed number equals the original number
        return rev == org;
    }
};
