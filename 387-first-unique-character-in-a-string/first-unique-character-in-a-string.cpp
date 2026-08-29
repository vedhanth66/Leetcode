class Solution {
public:
    int firstUniqChar(string s) {
        int count;
        for(int i = 0; i < s.length(); i++){
            count = 0;
            for(int j = 0; j < s.length(); j++){
                if(s[i] == s[j] && i != j){
                    count++;
                    break;
                }
            }
            if(count == 0){
                return i;
            }
        }
        return -1;
    }
};