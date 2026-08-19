class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int count1 = 0, count2 = 0, it1 = 0, it2 = 0;
        if(s.length() != t.length()){
            return false;
        }
        for(int i = 0; i < s.length(); i++){
            for(int j = i+1; j < s.length(); j++){
                if(s[i] == s[j] && t[i] != t[j]){
                    return false;
                }
                if(s[i] != s[j] && t[i] == t[j]){
                    return false;
                }
            }
        }
        return true;
    }
};