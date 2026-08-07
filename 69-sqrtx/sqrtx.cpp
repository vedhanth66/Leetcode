class Solution {
public:
    int mySqrt(int x) {
        if(x == 1 || x == 0){
            return x;
        }
        if(x == 2 || x == 3){
            return 1;
        }
        for(long long int i = 0; i < x; i++){
            if(i*i == x){
                return i;
            }else if(i*i > x){
                return i-1;
            }
        }
        return -1;
    }
};