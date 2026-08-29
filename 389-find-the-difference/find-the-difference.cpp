class Solution {
public:
    char findTheDifference(string s, string t) {
        int tarr[26] = {0};
        char res;
        for(int i = 0; i < t.length(); i++){
            tarr[t[i] - 'a']++;
        }
        for(int i = 0; i < s.length(); i++){
            tarr[s[i] - 'a']--;
        }
        for(int i = 0; i < sizeof(tarr) / sizeof(tarr[0]); i++){
            if(tarr[i] != 0){
                res = i + 'a';
            }
        }
        return res;
    }
};