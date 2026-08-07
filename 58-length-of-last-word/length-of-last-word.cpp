class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0;
        bool check = false;
        for(int i = s.length() - 1; i >= 0; i--){
            if(s[i] != ' '){
                check = true;
            }else{
                if (check) { 
                    break;
                } else {
                    continue;
                }
            }
            if(check){
                len++;
            }
        }
        return len;
    }
};