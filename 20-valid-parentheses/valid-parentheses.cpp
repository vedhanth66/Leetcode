class Solution {
public:
    bool isValid(string s) {
        stack<char> str;
        if(s.empty()){
            return true;
        }
        if(s[0] == ')' || s[0] == '}' || s[0] == ']'){
                return false;
        }
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                str.push(s[i]);
            }else{
                if (str.empty()){
                    return false;
                }
                if (s[i] == ')' && str.top() == '(') {
                    str.pop();
                } 
                else if (s[i] == '}' && str.top() == '{') {
                    str.pop();
                } 
                else if (s[i] == ']' && str.top() == '[') {
                    str.pop();
                } 
                else{
                    return false;
                }
            }
        }

        if(str.empty()){
            return true;
        }else{
            return false;
        }

    }
};