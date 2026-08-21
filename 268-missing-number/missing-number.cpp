class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int m = n+1;
        vector<int> arr(m,0);
        for(int i = 0; i < n; i++){
            arr[nums[i]]++;
        }
        for(int i = 0; i < m; i++){
            if(arr[i] == 0){
                return i;
            }
        }
        return -1;
    }
};