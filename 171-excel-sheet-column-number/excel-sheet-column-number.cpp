class Solution {
public:
    int titleToNumber(string columnTitle) {
        int res = columnTitle[0] + 1 - 65;
        for(int i = 1; i < columnTitle.length(); i++){
            res = res*26 + (columnTitle[i] + 1 - 65);
        }
        return res;
    }
};