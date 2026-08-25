class Solution {
public:
    string reverseVowels(string s) {
        int count = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'A' || s[i] == 'a' || s[i] == 'E' || s[i] == 'e' || s[i] == 'I' || s[i] == 'i' || s[i] == 'O' || s[i] == 'o' || s[i] == 'U' || s[i] == 'u'){
                count++;
            }
        }
        vector<char> vow;
        vector<int> pos;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'A' || s[i] == 'a' || s[i] == 'E' || s[i] == 'e' || s[i] == 'I' || s[i] == 'i' || s[i] == 'O' || s[i] == 'o' || s[i] == 'U' || s[i] == 'u'){
                vow.push_back(s[i]);
                pos.push_back(i);
                s[i] = ' ';
            }
        }
        reverse(vow.begin(), vow.end());
        for(int i = 0; i < pos.size(); i++){
            s[pos[i]] = vow[i];
        }
        return s;
    }
};