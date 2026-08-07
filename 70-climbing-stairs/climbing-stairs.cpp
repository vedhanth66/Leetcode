#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        int sum = 0;
        if(n == 0){
            return 1;
        }else if(n ==1 || n == 2 || n == 3){
            return n;
        }

        int p1 = 2, p2 = 1, i = 3;
        
        while(i <= n){
            sum = p1 + p2;
            p2 = p1;
            p1 = sum;
            i++;
        }
        return sum;
    }
};
