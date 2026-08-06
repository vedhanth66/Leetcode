class Solution {
public:
    int strStr(string haystack, string needle) {
        int count;
        if(haystack.length() == needle.length()){
            for(int i = 0; i < needle.length(); i++){
                if(haystack[i] != needle[i]){
                    return -1;
                }
            }
            return 0;
        }

        if(needle.length() > haystack.length()){
            return -1;
        }

        for(int i = 0; i < haystack.length() - needle.length() + 1; i++){
            count = 0;
            for(int j = 0; j < needle.length(); j++){
                if(haystack[i+j] != needle[j]){
                    break;
                }
                count++;
            }
            if(count == needle.length()){
                return i;
            }
        }
        return -1;
    }
};