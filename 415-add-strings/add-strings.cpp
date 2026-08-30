class Solution {
public:
    string addStrings(string num1, string num2) {
        string res = "";
        int i = num1.length() - 1, j = num2.length() - 1, carry = 0, sum = 0;
        while(i >= 0 && j >= 0){
            sum = (num1[i] - '0') + (num2[j] - '0') + carry;
            if(sum >= 10){
                carry = 1;
                sum %= 10;
            }else {
                carry = 0;
            }
            res.push_back(sum + '0');
            i--;
            j--;
        }
        while(i >= 0){
            sum = num1[i] - '0' + carry;
            if(sum >= 10){
                carry = 1;
                sum %= 10;
            }else {
                carry = 0;
            }
            res.push_back(sum + '0');
            i--;
        }
        while(j >= 0){
            sum = num2[j] - '0' + carry;
            if(sum >= 10){
                carry = 1;
                sum %= 10;
            }else {
                carry = 0;
            }
            res.push_back(sum + '0');
            j--;
        }
        if (carry) {
            res.push_back('1');
        }
        reverse(res.begin(), res.end());
        return res;
    }
};