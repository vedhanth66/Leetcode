#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashMap; // To store the value and its index
        
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i]; // The value that we need to find
            
            // Check if the complement exists in the hashMap
            if (hashMap.find(complement) != hashMap.end()) {
                // If found, return the indices
                return {hashMap[complement], i};
            }
            
            // Store the current value and its index in the hashMap
            hashMap[nums[i]] = i;
        }
        
        return {}; // Return an empty vector if no solution is found
    }
};
