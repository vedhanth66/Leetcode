class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        vector<int> vec;
        for(int i = 0; i < n1; i++){
            for(int j = 0; j < n2; j++){
                if(nums1[i] == nums2[j]){
                    vec.push_back(nums1[i]);
                }
            }
        }
        int n = vec.size();
        sort(vec.begin(), vec.end());
        auto last = unique(vec.begin(), vec.end());
        vec.erase(last, vec.end());
        return vec;
    }
};