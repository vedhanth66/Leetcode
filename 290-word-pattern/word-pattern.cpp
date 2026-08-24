class Solution {
public:
    bool wordPattern(string pattern, string s) {
        int count = 0;
        string temp;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == ' '){
                count++;
            }
        }
        count += 1;
        if(count != pattern.length()){
            return false;
        }
        string arr[pattern.length()];
        int it = 0;
        for(int i = 0; i <= s.length(); i++){
            if(i == s.length() || s[i] == ' '){
                arr[it++] = temp;
                temp.clear();
            }else{
                temp.push_back(s[i]);
            }
        }
        for(int i = 0; i < pattern.length(); i++){
            for(int j = i+1; j < pattern.length(); j++){
                if(pattern[i] == pattern[j]){
                    if(arr[i] != arr[j]){
                        return false;
                    }
                }else{
                    if(arr[i] == arr[j]){
                        return false;
                    }
                }
            }
        }
        return true;
    }
};