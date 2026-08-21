class Solution {
public:
    bool isAnagram(string s, string t) {
        int arr[26];
        if(t.length() != s.length()){
            return false;
        }
        for(int i = 0; i < s.length(); i++){
            arr[s[i] - 97]++;
            arr[t[i] - 97]--;
        }
        for(int i = 0; i < 26; i++){
            if(arr[i] != 0){
                return false;
            }
        }
        return true;
    }
};