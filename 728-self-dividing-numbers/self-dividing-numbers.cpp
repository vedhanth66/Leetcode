class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        int temp, rem, check;
        vector<int> res;
        for(int i = left; i <= right; i++){
            temp = i;
            check = 1;
            while(temp > 0){
                rem = temp % 10;
                if(rem == 0 || i % rem != 0){
                    check = 0;
                }
                temp /= 10;
            }
            if(check){
                res.push_back(i);
            }
        }
        return res;
    }
};