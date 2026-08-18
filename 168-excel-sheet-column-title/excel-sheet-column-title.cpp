class Solution {
public:
    string convertToTitle(int columnNumber) {
        string res = "";
        int res_int1, res_int2;
        char an1, an2;
        int columnNumber_temp = columnNumber;
        if(columnNumber > 0 && columnNumber <= 26){
            an1 = 65 + (columnNumber - 1);
            res.push_back(an1);
            return res;
        }
        while (columnNumber_temp > 0) {
            columnNumber_temp--;
            res_int2 = columnNumber_temp % 26;
            an2 = 65 + res_int2;
            res.push_back(an2);
            columnNumber_temp /= 26;
        }

        reverse(res.begin(), res.end());
        return res;
    }
};